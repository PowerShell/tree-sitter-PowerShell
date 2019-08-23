//-------------------------------------------------------------------------------------------------------
// Copyright (C) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.
//-------------------------------------------------------------------------------------------------------

try {
  module.exports = require("./build/Release/tree_sitter_PowerShell_binding");
} catch (error) {
  try {
    module.exports = require("./build/Debug/tree_sitter_PowerShell_binding");
  } catch (_) {
    throw error
  }
}

try {
  module.exports.nodeTypeInfo = require("./src/node-types.json");
} catch (_) {}
