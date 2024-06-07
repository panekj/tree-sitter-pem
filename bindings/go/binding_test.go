package tree_sitter_pem_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-pem"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_pem.Language())
	if language == nil {
		t.Errorf("Error loading Pem grammar")
	}
}
