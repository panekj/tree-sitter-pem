{
  description = "tree-sitter-pem";

  inputs = {
    nixpkgs.url = "nixpkgs/nixpkgs-unstable";
    utils.url = "github:numtide/flake-utils";
  };

  outputs = { self, nixpkgs, utils }: {
    overlays.default = _: prev: {
      tree-sitter = prev.tree-sitter.override {
        extraGrammars.tree-sitter-pem = {
          language = "pem";
          inherit (prev.tree-sitter) version;
          src = _: ./.;
        };
      };
    };
  } // utils.lib.eachDefaultSystem (system: with import nixpkgs
    { overlays = [ self.overlays.default ]; inherit system; }; {
    packages.default = tree-sitter.builtGrammars.tree-sitter-pem;

    devShells.default = mkShell {
      packages = [
        nodejs
        python3
        tree-sitter
        typescript
        nodePackages.typescript-language-server
      ];
    };
  });
}
