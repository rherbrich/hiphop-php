/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#ifndef __GENERATED_cls_RecursiveDirectoryIterator_h20f53fae__
#define __GENERATED_cls_RecursiveDirectoryIterator_h20f53fae__

#include <cls/RecursiveDirectoryIterator.fw.h>
#include <cls/DirectoryIterator.h>
#include <cls/RecursiveIterator.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/iterator.php line 768 */
FORWARD_DECLARE_CLASS(RecursiveDirectoryIterator);
class c_RecursiveDirectoryIterator : public c_DirectoryIterator {
  public:

  // Properties

  // Class Map
  virtual bool o_instanceof(CStrRef s) const;
  DECLARE_CLASS_COMMON(RecursiveDirectoryIterator, RecursiveDirectoryIterator)
  DECLARE_INVOKE_EX(RecursiveDirectoryIterator, RecursiveDirectoryIterator, DirectoryIterator)

  // DECLARE_STATIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT_RecursiveDirectoryIterator 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GET_RecursiveDirectoryIterator 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_RecursiveDirectoryIterator 1
  static Variant os_constant(const char *s);

  // DECLARE_INSTANCE_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_GETARRAY_RecursiveDirectoryIterator 1
  #define OMIT_JUMP_TABLE_CLASS_SETARRAY_RecursiveDirectoryIterator 1
  #define OMIT_JUMP_TABLE_CLASS_realProp_RecursiveDirectoryIterator 1
  #define OMIT_JUMP_TABLE_CLASS_realProp_PRIVATE_RecursiveDirectoryIterator 1

  // DECLARE_INSTANCE_PUBLIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_realProp_PUBLIC_RecursiveDirectoryIterator 1

  // DECLARE_COMMON_INVOKE
  static bool os_get_call_info(MethodCallPackage &mcp, int64 hash = -1);
  #define OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_RecursiveDirectoryIterator 1
  virtual bool o_get_call_info(MethodCallPackage &mcp, int64 hash = -1);

  public:
  DECLARE_INVOKES_FROM_EVAL
  void init();
  public: void t___construct(Variant v_path, Variant v_flags = 16LL /* RecursiveDirectoryIterator::CURRENT_AS_FILEINFO */);
  public: c_RecursiveDirectoryIterator *create(Variant v_path, Variant v_flags = 16LL /* RecursiveDirectoryIterator::CURRENT_AS_FILEINFO */);
  public: void dynConstruct(CArrRef params);
  public: void getConstructor(MethodCallPackage &mcp);
  public: void dynConstructFromEval(Eval::VariableEnvironment &env, const Eval::FunctionCallExpression *call);
  public: Variant t_current();
  public: Variant t_key();
  public: void t_next();
  public: void t_rewind();
  public: void t_seek(CVarRef v_position);
  public: String t___tostring();
  public: bool t_valid();
  public: bool t_haschildren();
  public: Object t_getchildren();
  public: String t_getsubpath();
  public: String t_getsubpathname();
  DECLARE_METHOD_INVOKE_HELPERS(next);
  DECLARE_METHOD_INVOKE_HELPERS(key);
  DECLARE_METHOD_INVOKE_HELPERS(valid);
  DECLARE_METHOD_INVOKE_HELPERS(__tostring);
  DECLARE_METHOD_INVOKE_HELPERS(getsubpathname);
  DECLARE_METHOD_INVOKE_HELPERS(getsubpath);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(haschildren);
  DECLARE_METHOD_INVOKE_HELPERS(seek);
  DECLARE_METHOD_INVOKE_HELPERS(getchildren);
  DECLARE_METHOD_INVOKE_HELPERS(current);
  DECLARE_METHOD_INVOKE_HELPERS(rewind);
};
extern const int64 q_RecursiveDirectoryIterator_CURRENT_AS_SELF;
extern const int64 q_RecursiveDirectoryIterator_CURRENT_AS_FILEINFO;
extern const int64 q_RecursiveDirectoryIterator_CURRENT_AS_PATHNAME;
extern const int64 q_RecursiveDirectoryIterator_KEY_AS_PATHNAME;
extern const int64 q_RecursiveDirectoryIterator_KEY_AS_FILENAME;
extern const int64 q_RecursiveDirectoryIterator_NEW_CURRENT_AND_KEY;
extern struct ObjectStaticCallbacks cw_RecursiveDirectoryIterator;
Object co_RecursiveDirectoryIterator(CArrRef params, bool init = true);
Object coo_RecursiveDirectoryIterator();

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_RecursiveDirectoryIterator_h20f53fae__
