/// @file xed-operand-element-xtype-enum.h

// This file was automatically generated.
// Do not edit this file.

#if !defined(XED_OPERAND_ELEMENT_XTYPE_ENUM_H)
# define XED_OPERAND_ELEMENT_XTYPE_ENUM_H
#include "xed-common-hdrs.h"
typedef enum {
  XED_OPERAND_XTYPE_INVALID,
  XED_OPERAND_XTYPE_B80,
  XED_OPERAND_XTYPE_F16,
  XED_OPERAND_XTYPE_F32,
  XED_OPERAND_XTYPE_F64,
  XED_OPERAND_XTYPE_F80,
  XED_OPERAND_XTYPE_I1,
  XED_OPERAND_XTYPE_I16,
  XED_OPERAND_XTYPE_I32,
  XED_OPERAND_XTYPE_I64,
  XED_OPERAND_XTYPE_I8,
  XED_OPERAND_XTYPE_INT,
  XED_OPERAND_XTYPE_STRUCT,
  XED_OPERAND_XTYPE_U128,
  XED_OPERAND_XTYPE_U16,
  XED_OPERAND_XTYPE_U256,
  XED_OPERAND_XTYPE_U32,
  XED_OPERAND_XTYPE_U64,
  XED_OPERAND_XTYPE_U8,
  XED_OPERAND_XTYPE_UINT,
  XED_OPERAND_XTYPE_VAR,
  XED_OPERAND_XTYPE_LAST
} xed_operand_element_xtype_enum_t;

/// This converts strings to #xed_operand_element_xtype_enum_t types.
/// @param s A C-string.
/// @return #xed_operand_element_xtype_enum_t
/// @ingroup ENUM
XED_DLL_EXPORT xed_operand_element_xtype_enum_t str2xed_operand_element_xtype_enum_t(const char* s);
/// This converts strings to #xed_operand_element_xtype_enum_t types.
/// @param p An enumeration element of type xed_operand_element_xtype_enum_t.
/// @return string
/// @ingroup ENUM
XED_DLL_EXPORT const char* xed_operand_element_xtype_enum_t2str(const xed_operand_element_xtype_enum_t p);

/// Returns the last element of the enumeration
/// @return xed_operand_element_xtype_enum_t The last element of the enumeration.
/// @ingroup ENUM
XED_DLL_EXPORT xed_operand_element_xtype_enum_t xed_operand_element_xtype_enum_t_last(void);
#endif
