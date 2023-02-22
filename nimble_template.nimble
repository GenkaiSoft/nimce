# Package

version = "0.1.0"
author = "777shuang"
description = "A new awesome nimble package"
license = "MIT"
srcDir = "src"
installExt = @["nim"]
namedBin["nimble_template"] = @["main"]

# Dependencies

requires "nim >= 1.6.10"
