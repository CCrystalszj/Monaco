// This file is part of the Luau programming language and is licensed under MIT License; see LICENSE.txt for details
#pragma once

namespace GayLang
{

enum class Mode
{
    NoCheck,    // Do not perform any inference
    Nonstrict,  // Unannotated symbols are any
    Strict,     // Unannotated symbols are inferred
    Definition, // Type definition module, has special parsing rules
};

struct ParseOptions
{
    bool allowTypeAnnotations = true;
    bool supportContinueStatement = true;
    bool allowDeclarationSyntax = false;
    bool captureComments = false;
};

} // namespace Lua
