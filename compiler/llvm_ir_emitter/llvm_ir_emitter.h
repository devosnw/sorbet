#ifndef SORBET_COMPILER_LLVM_IR_EMITTER_H
#define SORBET_COMPILER_LLVM_IR_EMITTER_H

#include "spdlog/spdlog.h"

namespace llvm {
class LLVMContext;
class Module;
} // namespace llvm

namespace sorbet::cfg {
    class CFG;
}
namespace sorbet::ast {
    class MethodDef;
}

namespace sorbet::compiler {
class LLVMIREmitter {
public:
    static void run(spdlog::logger &logger, llvm::LLVMContext &lctx, cfg::CFG &cfg, std::unique_ptr<ast::MethodDef> &md);
};
} // namespace sorbet::compiler
#endif
