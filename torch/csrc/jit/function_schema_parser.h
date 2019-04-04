#pragma once

#include <ATen/core/function_schema.h>
#include <c10/macros/Macros.h>
#include <c10/util/either.h>
#include <string>

namespace torch {
namespace jit {

C10_API c10::either<c10::OperatorName, c10::FunctionSchema> parseSchemaOrName(const std::string& schemaOrName);
C10_API c10::FunctionSchema parseSchema(const std::string& schema);

} // namespace jit
} // namespace torch
