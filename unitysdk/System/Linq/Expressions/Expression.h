#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Linq/Expressions/GotoExpressionKind.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/BindingFlags.h"

namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Dynamic::Utils { template <typename T1, typename T2> class CacheDict_2; }
namespace System::Linq::Expressions { class BinaryExpression; }
namespace System::Linq::Expressions { class BlockExpression; }
namespace System::Linq::Expressions { class CatchBlock; }
namespace System::Linq::Expressions { class ConditionalExpression; }
namespace System::Linq::Expressions { class ConstantExpression; }
namespace System::Linq::Expressions { class DefaultExpression; }
namespace System::Linq::Expressions { class ExpressionVisitor; }
namespace System::Linq::Expressions { class Expression_ExtensionInfo; }
namespace System::Linq::Expressions { class GotoExpression; }
namespace System::Linq::Expressions { class IndexExpression; }
namespace System::Linq::Expressions { class InvocationExpression; }
namespace System::Linq::Expressions { class LabelExpression; }
namespace System::Linq::Expressions { class LabelTarget; }
namespace System::Linq::Expressions { class LambdaExpression; }
namespace System::Linq::Expressions { class MemberExpression; }
namespace System::Linq::Expressions { class MethodCallExpression; }
namespace System::Linq::Expressions { class NewArrayExpression; }
namespace System::Linq::Expressions { class NewExpression; }
namespace System::Linq::Expressions { class ParameterExpression; }
namespace System::Linq::Expressions { class TryExpression; }
namespace System::Linq::Expressions { class UnaryExpression; }
namespace System::Linq::Expressions { template <typename T> class Expression_1; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class MethodBase; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class ParameterInfo; }
namespace System::Reflection { class PropertyInfo; }
namespace System::Runtime::CompilerServices { template <typename T1, typename T2> class ConditionalWeakTable_2; }

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1E6F4180)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ADDASSIGNCHECKED_OFFSET UNITYSDK_OFFSET(0x1E6EFCE0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ADDASSIGN_OFFSET UNITYSDK_OFFSET(0x1E6ED1F0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ADDCHECKED_OFFSET UNITYSDK_OFFSET(0x1E6E7280)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ADD_OFFSET UNITYSDK_OFFSET(0x1E6E6ED0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ANDALSO_OFFSET UNITYSDK_OFFSET(0x1E6E9110)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ANDASSIGN_OFFSET UNITYSDK_OFFSET(0x1E6ED600)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_AND_OFFSET UNITYSDK_OFFSET(0x1E6E8D60)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_APPLYTYPEARGS_OFFSET UNITYSDK_OFFSET(0x1E6FC840)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ARRAYACCESS_1_OFFSET UNITYSDK_OFFSET(0x1E6F48A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ARRAYACCESS_OFFSET UNITYSDK_OFFSET(0x1E6F4FC0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ARRAYINDEX_OFFSET UNITYSDK_OFFSET(0x1E6EC580)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ARRAYLENGTH_OFFSET UNITYSDK_OFFSET(0x1E701F60)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ASSIGN_OFFSET UNITYSDK_OFFSET(0x1E6D5620)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCKCORE_OFFSET UNITYSDK_OFFSET(0x1E6F31B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCK_1_OFFSET UNITYSDK_OFFSET(0x1E6F1980)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCK_2_OFFSET UNITYSDK_OFFSET(0x1E6F1C90)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCK_3_OFFSET UNITYSDK_OFFSET(0x1E6D5B80)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCK_4_OFFSET UNITYSDK_OFFSET(0x1E6F1A10)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCK_OFFSET UNITYSDK_OFFSET(0x1E6F1860)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_10_OFFSET UNITYSDK_OFFSET(0x1E6FB930)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_11_OFFSET UNITYSDK_OFFSET(0x1E6FBCA0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_12_OFFSET UNITYSDK_OFFSET(0x1E6D7A40)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_13_OFFSET UNITYSDK_OFFSET(0x1E6FA0B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_1_OFFSET UNITYSDK_OFFSET(0x1E6D7C30)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_2_OFFSET UNITYSDK_OFFSET(0x1E6D7E10)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_3_OFFSET UNITYSDK_OFFSET(0x1E6F95D0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_4_OFFSET UNITYSDK_OFFSET(0x1E6F98C0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_5_OFFSET UNITYSDK_OFFSET(0x1E6F9C40)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_6_OFFSET UNITYSDK_OFFSET(0x1E6FA050)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_7_OFFSET UNITYSDK_OFFSET(0x1E6FB3A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_8_OFFSET UNITYSDK_OFFSET(0x1E6FB5F0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_9_OFFSET UNITYSDK_OFFSET(0x1E6FB660)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_OFFSET UNITYSDK_OFFSET(0x1E6F93B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CHECKMETHOD_OFFSET UNITYSDK_OFFSET(0x1E6F9130)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_COALESCE_OFFSET UNITYSDK_OFFSET(0x1E6EBB30)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONDITION_1_OFFSET UNITYSDK_OFFSET(0x1E6DB8B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONDITION_OFFSET UNITYSDK_OFFSET(0x1E6D84A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONSTANT_1_OFFSET UNITYSDK_OFFSET(0x1E6D80F0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONSTANT_OFFSET UNITYSDK_OFFSET(0x1E6F3910)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONVERTCHECKED_OFFSET UNITYSDK_OFFSET(0x1E7024E0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONVERT_1_OFFSET UNITYSDK_OFFSET(0x1E702220)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONVERT_OFFSET UNITYSDK_OFFSET(0x1E6D8080)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CREATELAMBDA_OFFSET UNITYSDK_OFFSET(0x1E6F6D10)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_DECREMENT_OFFSET UNITYSDK_OFFSET(0x1E703490)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_DIVIDEASSIGN_OFFSET UNITYSDK_OFFSET(0x1E6EDA10)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_DIVIDE_OFFSET UNITYSDK_OFFSET(0x1E6E84F0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_EMPTY_OFFSET UNITYSDK_OFFSET(0x1E6F39A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_EQUAL_OFFSET UNITYSDK_OFFSET(0x1E6EB5E0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_EXCLUSIVEORASSIGN_OFFSET UNITYSDK_OFFSET(0x1E6EDE20)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_EXCLUSIVEOR_OFFSET UNITYSDK_OFFSET(0x1E6EB780)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_FIELD_1_OFFSET UNITYSDK_OFFSET(0x1E6F83F0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_FIELD_OFFSET UNITYSDK_OFFSET(0x1E6F8060)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_FINDMETHOD_OFFSET UNITYSDK_OFFSET(0x1E6FC0A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETCOMPARISONOPERATOR_OFFSET UNITYSDK_OFFSET(0x1E6F1140)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETEQUALITYCOMPARISONOPERATOR_OFFSET UNITYSDK_OFFSET(0x1E6F0910)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETINVOKEMETHOD_OFFSET UNITYSDK_OFFSET(0x1E6F6700)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETMETHODBASEDASSIGNOPERATOR_OFFSET UNITYSDK_OFFSET(0x1E6E48D0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETMETHODBASEDBINARYOPERATOR_OFFSET UNITYSDK_OFFSET(0x1E6E36D0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETMETHODBASEDCOERCIONOPERATOR_OFFSET UNITYSDK_OFFSET(0x1E704C00)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETMETHODBASEDUNARYOPERATOR_OFFSET UNITYSDK_OFFSET(0x1E704150)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETOPTIMIZEDBLOCKEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1E6F1F70)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETPARAMETERSFORVALIDATION_OFFSET UNITYSDK_OFFSET(0x1E6F6AC0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0x1E6F8C60)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETRESULTTYPEOFSHIFT_OFFSET UNITYSDK_OFFSET(0x1E6F1710)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDASSIGNOPERATORORTHROW_OFFSET UNITYSDK_OFFSET(0x1E6E5900)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDBINARYOPERATORORTHROW_OFFSET UNITYSDK_OFFSET(0x1E6E53A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDBINARYOPERATOR_1_OFFSET UNITYSDK_OFFSET(0x1E6E3330)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDBINARYOPERATOR_OFFSET UNITYSDK_OFFSET(0x1E6E2BD0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDCOERCIONORTHROW_OFFSET UNITYSDK_OFFSET(0x1E704A10)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDCOERCION_OFFSET UNITYSDK_OFFSET(0x1E704AB0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDUNARYOPERATORORTHROW_OFFSET UNITYSDK_OFFSET(0x1E7038B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDUNARYOPERATOR_OFFSET UNITYSDK_OFFSET(0x1E703BA0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GET_CANREDUCE_OFFSET UNITYSDK_OFFSET(0x1E6F3C90)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1E6F3A50)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E6F3B70)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GOTO_OFFSET UNITYSDK_OFFSET(0x1E6F4370)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1E6EB510)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1E6EB440)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INCREMENT_OFFSET UNITYSDK_OFFSET(0x1E703230)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E6D53D0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISCOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1E6FCA70)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISFALSE_OFFSET UNITYSDK_OFFSET(0x1E701800)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISLIFTINGCONDITIONALLOGICALOPERATOR_OFFSET UNITYSDK_OFFSET(0x1E6E5E50)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISNULLCOMPARISON_OFFSET UNITYSDK_OFFSET(0x1E6E5F60)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISNULLCONSTANT_OFFSET UNITYSDK_OFFSET(0x1E6E6240)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISSIMPLESHIFT_OFFSET UNITYSDK_OFFSET(0x1E6F16B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISTRUE_OFFSET UNITYSDK_OFFSET(0x1E701A80)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISVALIDLIFTEDCONDITIONALLOGICALOPERATOR_OFFSET UNITYSDK_OFFSET(0x1E6E6B40)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LABEL_1_OFFSET UNITYSDK_OFFSET(0x1E6F6C70)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LABEL_OFFSET UNITYSDK_OFFSET(0x1E6F6B80)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LAMBDA_1_OFFSET UNITYSDK_OFFSET(0x1E6F74D0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LAMBDA_OFFSET UNITYSDK_OFFSET(0x1E6F73D0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LEFTSHIFTASSIGN_OFFSET UNITYSDK_OFFSET(0x1E6EE230)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LEFTSHIFT_OFFSET UNITYSDK_OFFSET(0x1E6ECDC0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1E6EB370)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1E6EB2A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEBINARY_1_OFFSET UNITYSDK_OFFSET(0x1E6D2F90)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEBINARY_OFFSET UNITYSDK_OFFSET(0x1E6D5340)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKECATCHBLOCK_OFFSET UNITYSDK_OFFSET(0x1E6DAAE0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEGOTO_OFFSET UNITYSDK_OFFSET(0x1E6F43F0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEINDEXPROPERTY_OFFSET UNITYSDK_OFFSET(0x1E6F5090)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEINDEX_OFFSET UNITYSDK_OFFSET(0x1E6D5F30)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEMEMBERACCESS_OFFSET UNITYSDK_OFFSET(0x1E6D5A30)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEOPASSIGNUNARY_OFFSET UNITYSDK_OFFSET(0x1E705390)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKETRY_OFFSET UNITYSDK_OFFSET(0x1E6FF5B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEUNARY_OFFSET UNITYSDK_OFFSET(0x1E7008A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MODULOASSIGN_OFFSET UNITYSDK_OFFSET(0x1E6EE6C0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MODULO_OFFSET UNITYSDK_OFFSET(0x1E6E88A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MULTIPLYASSIGNCHECKED_OFFSET UNITYSDK_OFFSET(0x1E6F0500)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MULTIPLYASSIGN_OFFSET UNITYSDK_OFFSET(0x1E6EEAD0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MULTIPLYCHECKED_OFFSET UNITYSDK_OFFSET(0x1E6E8140)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1E6E7D90)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEGATECHECKED_OFFSET UNITYSDK_OFFSET(0x1E701270)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEGATE_OFFSET UNITYSDK_OFFSET(0x1E700F80)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWARRAYBOUNDS_OFFSET UNITYSDK_OFFSET(0x1E6FD630)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWARRAYINIT_1_OFFSET UNITYSDK_OFFSET(0x1E6FCF30)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWARRAYINIT_OFFSET UNITYSDK_OFFSET(0x1E6FCED0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEW_1_OFFSET UNITYSDK_OFFSET(0x1E6FDA70)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEW_2_OFFSET UNITYSDK_OFFSET(0x1E6FDEB0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEW_OFFSET UNITYSDK_OFFSET(0x1E6FDA10)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NOTEQUAL_OFFSET UNITYSDK_OFFSET(0x1E6EB6B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NOT_OFFSET UNITYSDK_OFFSET(0x1E701560)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ONESCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x1E701D00)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ORASSIGN_OFFSET UNITYSDK_OFFSET(0x1E6EEEE0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ORELSE_OFFSET UNITYSDK_OFFSET(0x1E6EA370)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_OR_OFFSET UNITYSDK_OFFSET(0x1E6E9FC0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PARAMETERISASSIGNABLE_OFFSET UNITYSDK_OFFSET(0x1E6E46B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PARAMETER_1_OFFSET UNITYSDK_OFFSET(0x1E6D7500)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PARAMETER_OFFSET UNITYSDK_OFFSET(0x1E6FF440)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_POSTDECREMENTASSIGN_OFFSET UNITYSDK_OFFSET(0x1E703840)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_POSTINCREMENTASSIGN_OFFSET UNITYSDK_OFFSET(0x1E703760)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_POWERASSIGN_OFFSET UNITYSDK_OFFSET(0x1E6EF2F0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_POWER_OFFSET UNITYSDK_OFFSET(0x1E6E8C50)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PREDECREMENTASSIGN_OFFSET UNITYSDK_OFFSET(0x1E7037D0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PREINCREMENTASSIGN_OFFSET UNITYSDK_OFFSET(0x1E7036F0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PROPERTY_1_OFFSET UNITYSDK_OFFSET(0x1E6D7680)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PROPERTY_2_OFFSET UNITYSDK_OFFSET(0x1E6F8710)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PROPERTY_3_OFFSET UNITYSDK_OFFSET(0x1E6F8BB0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PROPERTY_OFFSET UNITYSDK_OFFSET(0x1E6F4820)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_QUOTE_OFFSET UNITYSDK_OFFSET(0x1E6C7610)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_REDUCEANDCHECK_OFFSET UNITYSDK_OFFSET(0x1E6F3ED0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_REDUCE_OFFSET UNITYSDK_OFFSET(0x1E6F3CA0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_REFERENCEEQUAL_OFFSET UNITYSDK_OFFSET(0x1E6D2A50)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_REFERENCENOTEQUAL_OFFSET UNITYSDK_OFFSET(0x1E6D2CA0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_REQUIRESCANREAD_OFFSET UNITYSDK_OFFSET(0x1E6F1D00)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_REQUIRESCANWRITE_OFFSET UNITYSDK_OFFSET(0x1E6E2810)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_RIGHTSHIFTASSIGN_OFFSET UNITYSDK_OFFSET(0x1E6EF440)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_RIGHTSHIFT_OFFSET UNITYSDK_OFFSET(0x1E6EC990)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SUBTRACTASSIGNCHECKED_OFFSET UNITYSDK_OFFSET(0x1E6F00F0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SUBTRACTASSIGN_OFFSET UNITYSDK_OFFSET(0x1E6EF8D0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SUBTRACTCHECKED_OFFSET UNITYSDK_OFFSET(0x1E6E79E0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x1E6E7630)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_THROW_OFFSET UNITYSDK_OFFSET(0x1E702820)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6F16A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TRYFINALLY_OFFSET UNITYSDK_OFFSET(0x1E6FF540)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TRYQUOTE_OFFSET UNITYSDK_OFFSET(0x1E6F4810)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TYPEAS_OFFSET UNITYSDK_OFFSET(0x1E702AF0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_UNARYPLUS_OFFSET UNITYSDK_OFFSET(0x1E702CA0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_UNBOX_OFFSET UNITYSDK_OFFSET(0x1E702F00)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEACCESSORARGUMENTTYPES_OFFSET UNITYSDK_OFFSET(0x1E6F6110)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEACCESSOR_OFFSET UNITYSDK_OFFSET(0x1E6F5D20)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEANONYMOUSTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1E6FEF50)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1E6F6B40)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEARGUMENTTYPES_OFFSET UNITYSDK_OFFSET(0x1E6FC7C0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATECALLINSTANCETYPE_OFFSET UNITYSDK_OFFSET(0x1E6F6090)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATECOALESCEARGTYPES_OFFSET UNITYSDK_OFFSET(0x1E6F1540)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATECONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1E6FDDE0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEGOTOTYPE_OFFSET UNITYSDK_OFFSET(0x1E6F46A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEGOTO_OFFSET UNITYSDK_OFFSET(0x1E6F44F0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEINDEXEDPROPERTY_OFFSET UNITYSDK_OFFSET(0x1E6F5170)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATELAMBDAARGS_OFFSET UNITYSDK_OFFSET(0x1E6F7570)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEMETHODANDGETPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1E6F9510)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEMETHODINFO_OFFSET UNITYSDK_OFFSET(0x1E6E5EA0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATENEWARGS_OFFSET UNITYSDK_OFFSET(0x1E6FE240)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEONEARGUMENT_OFFSET UNITYSDK_OFFSET(0x1E6F6B50)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEOPASSIGNCONVERSIONLAMBDA_OFFSET UNITYSDK_OFFSET(0x1E6E4E40)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEOPERATOR_OFFSET UNITYSDK_OFFSET(0x1E6E44D0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEPARAMSWITHOPERANDSORTHROW_OFFSET UNITYSDK_OFFSET(0x1E6E4840)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATESTATICORINSTANCEMETHOD_OFFSET UNITYSDK_OFFSET(0x1E6FC5A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATETRYANDCATCHHAVESAMETYPE_OFFSET UNITYSDK_OFFSET(0x1E6FF830)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEUSERDEFINEDCONDITIONALLOGICOPERATOR_OFFSET UNITYSDK_OFFSET(0x1E6E62B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEVARIABLES_OFFSET UNITYSDK_OFFSET(0x1E6F3660)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1E6FF4A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VARIABLE_OFFSET UNITYSDK_OFFSET(0x1E6D59C0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VERIFYOPTRUEFALSE_OFFSET UNITYSDK_OFFSET(0x1E6E6D40)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VISITCHILDREN_OFFSET UNITYSDK_OFFSET(0x1E6F3D70)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E705740)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6D2210)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Expression_TypeDefinitionIndex = 3190;

	class Expression : public ::System::Object
	{
	public:
		static ::System::Dynamic::Utils::CacheDict_2<::System::Type*, ::System::Func_5<::System::Linq::Expressions::Expression*, ::System::String*, ::System::Boolean, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*, ::System::Linq::Expressions::LambdaExpression*>*>** StaticGet_s_lambdaFactories()
		{
			return (::System::Dynamic::Utils::CacheDict_2<::System::Type*, ::System::Func_5<::System::Linq::Expressions::Expression*, ::System::String*, ::System::Boolean, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*, ::System::Linq::Expressions::LambdaExpression*>*>**)Il2CppClass::FromTypeDefinitionIndex(Expression_TypeDefinitionIndex)->GetStaticField(0x2BDB0);
		}
		static ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression_ExtensionInfo*>** StaticGet_s_legacyCtorSupportTable()
		{
			return (::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression_ExtensionInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Expression_TypeDefinitionIndex)->GetStaticField(0x2BDB8);
		}
		static ::System::Dynamic::Utils::CacheDict_2<::System::Type*, ::System::Reflection::MethodInfo*>** StaticGet_s_lambdaDelegateCache()
		{
			return (::System::Dynamic::Utils::CacheDict_2<::System::Type*, ::System::Reflection::MethodInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Expression_TypeDefinitionIndex)->GetStaticField(0x2BDC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION__CCTOR_OFFSET))();
		}

		static ::System::Linq::Expressions::BinaryExpression* Assign(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ASSIGN_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::BinaryExpression* GetUserDefinedBinaryOperator(::System::Linq::Expressions::ExpressionType a1, ::System::String* a2, ::System::Linq::Expressions::Expression* a3, ::System::Linq::Expressions::Expression* a4, ::System::Boolean a5)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::String*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDBINARYOPERATOR_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Linq::Expressions::BinaryExpression* GetMethodBasedBinaryOperator(::System::Linq::Expressions::ExpressionType a1, ::System::Linq::Expressions::Expression* a2, ::System::Linq::Expressions::Expression* a3, ::System::Reflection::MethodInfo* a4, ::System::Boolean a5)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETMETHODBASEDBINARYOPERATOR_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Linq::Expressions::BinaryExpression* GetMethodBasedAssignOperator(::System::Linq::Expressions::ExpressionType a1, ::System::Linq::Expressions::Expression* a2, ::System::Linq::Expressions::Expression* a3, ::System::Reflection::MethodInfo* a4, ::System::Linq::Expressions::LambdaExpression* a5, ::System::Boolean a6)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETMETHODBASEDASSIGNOPERATOR_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Linq::Expressions::BinaryExpression* GetUserDefinedBinaryOperatorOrThrow(::System::Linq::Expressions::ExpressionType a1, ::System::String* a2, ::System::Linq::Expressions::Expression* a3, ::System::Linq::Expressions::Expression* a4, ::System::Boolean a5)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::String*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDBINARYOPERATORORTHROW_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Linq::Expressions::BinaryExpression* GetUserDefinedAssignOperatorOrThrow(::System::Linq::Expressions::ExpressionType a1, ::System::String* a2, ::System::Linq::Expressions::Expression* a3, ::System::Linq::Expressions::Expression* a4, ::System::Linq::Expressions::LambdaExpression* a5, ::System::Boolean a6)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::String*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::LambdaExpression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDASSIGNOPERATORORTHROW_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Reflection::MethodInfo* GetUserDefinedBinaryOperator_1(::System::Linq::Expressions::ExpressionType a1, ::System::Type* a2, ::System::Type* a3, ::System::String* a4)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Linq::Expressions::ExpressionType, ::System::Type*, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDBINARYOPERATOR_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean IsLiftingConditionalLogicalOperator(::System::Type* a1, ::System::Type* a2, ::System::Reflection::MethodInfo* a3, ::System::Linq::Expressions::ExpressionType a4)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::ExpressionType))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISLIFTINGCONDITIONALLOGICALOPERATOR_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean ParameterIsAssignable(::System::Reflection::ParameterInfo* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Reflection::ParameterInfo*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PARAMETERISASSIGNABLE_OFFSET))(a1, a2);
		}

		static ::System::Void ValidateParamswithOperandsOrThrow(::System::Type* a1, ::System::Type* a2, ::System::Linq::Expressions::ExpressionType a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Type*, ::System::Linq::Expressions::ExpressionType, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEPARAMSWITHOPERANDSORTHROW_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ValidateOperator(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Void(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEOPERATOR_OFFSET))(a1);
		}

		static ::System::Void ValidateMethodInfo(::System::Reflection::MethodInfo* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Reflection::MethodInfo*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEMETHODINFO_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsNullComparison(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2)
		{
			return ((::System::Boolean(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISNULLCOMPARISON_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsNullConstant(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Boolean(*)(::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISNULLCONSTANT_OFFSET))(a1);
		}

		static ::System::Void ValidateUserDefinedConditionalLogicOperator(::System::Linq::Expressions::ExpressionType a1, ::System::Type* a2, ::System::Type* a3, ::System::Reflection::MethodInfo* a4)
		{
			return ((::System::Void(*)(::System::Linq::Expressions::ExpressionType, ::System::Type*, ::System::Type*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEUSERDEFINEDCONDITIONALLOGICOPERATOR_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void VerifyOpTrueFalse(::System::Linq::Expressions::ExpressionType a1, ::System::Type* a2, ::System::Reflection::MethodInfo* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::System::Linq::Expressions::ExpressionType, ::System::Type*, ::System::Reflection::MethodInfo*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VERIFYOPTRUEFALSE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean IsValidLiftedConditionalLogicalOperator(::System::Type* a1, ::System::Type* a2, ::Il2CppArray<::System::Reflection::ParameterInfo*>* a3)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISVALIDLIFTEDCONDITIONALLOGICALOPERATOR_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::BinaryExpression* MakeBinary(::System::Linq::Expressions::ExpressionType a1, ::System::Linq::Expressions::Expression* a2, ::System::Linq::Expressions::Expression* a3, ::System::Boolean a4, ::System::Reflection::MethodInfo* a5)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEBINARY_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Linq::Expressions::BinaryExpression* MakeBinary_1(::System::Linq::Expressions::ExpressionType a1, ::System::Linq::Expressions::Expression* a2, ::System::Linq::Expressions::Expression* a3, ::System::Boolean a4, ::System::Reflection::MethodInfo* a5, ::System::Linq::Expressions::LambdaExpression* a6)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEBINARY_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Linq::Expressions::BinaryExpression* Equal(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Boolean a3, ::System::Reflection::MethodInfo* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_EQUAL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* ReferenceEqual(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_REFERENCEEQUAL_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::BinaryExpression* NotEqual(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Boolean a3, ::System::Reflection::MethodInfo* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NOTEQUAL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* ReferenceNotEqual(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_REFERENCENOTEQUAL_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::BinaryExpression* GetEqualityComparisonOperator(::System::Linq::Expressions::ExpressionType a1, ::System::String* a2, ::System::Linq::Expressions::Expression* a3, ::System::Linq::Expressions::Expression* a4, ::System::Boolean a5)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::String*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETEQUALITYCOMPARISONOPERATOR_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Linq::Expressions::BinaryExpression* GreaterThan(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Boolean a3, ::System::Reflection::MethodInfo* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GREATERTHAN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* LessThan(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Boolean a3, ::System::Reflection::MethodInfo* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LESSTHAN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* GreaterThanOrEqual(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Boolean a3, ::System::Reflection::MethodInfo* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GREATERTHANOREQUAL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* LessThanOrEqual(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Boolean a3, ::System::Reflection::MethodInfo* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LESSTHANOREQUAL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* GetComparisonOperator(::System::Linq::Expressions::ExpressionType a1, ::System::String* a2, ::System::Linq::Expressions::Expression* a3, ::System::Linq::Expressions::Expression* a4, ::System::Boolean a5)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::String*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETCOMPARISONOPERATOR_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Linq::Expressions::BinaryExpression* AndAlso(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ANDALSO_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::BinaryExpression* OrElse(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ORELSE_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::BinaryExpression* Coalesce(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Linq::Expressions::LambdaExpression* a3)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_COALESCE_OFFSET))(a1, a2, a3);
		}

		static ::System::Type* ValidateCoalesceArgTypes(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Type*(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATECOALESCEARGTYPES_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::BinaryExpression* Add(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ADD_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::BinaryExpression* AddAssign(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3, ::System::Linq::Expressions::LambdaExpression* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ADDASSIGN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ValidateOpAssignConversionLambda(::System::Linq::Expressions::LambdaExpression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3, ::System::Linq::Expressions::ExpressionType a4)
		{
			return ((::System::Void(*)(::System::Linq::Expressions::LambdaExpression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::ExpressionType))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEOPASSIGNCONVERSIONLAMBDA_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* AddAssignChecked(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3, ::System::Linq::Expressions::LambdaExpression* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ADDASSIGNCHECKED_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* AddChecked(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ADDCHECKED_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::BinaryExpression* Subtract(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SUBTRACT_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::BinaryExpression* SubtractAssign(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3, ::System::Linq::Expressions::LambdaExpression* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SUBTRACTASSIGN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* SubtractAssignChecked(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3, ::System::Linq::Expressions::LambdaExpression* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SUBTRACTASSIGNCHECKED_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* SubtractChecked(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SUBTRACTCHECKED_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::BinaryExpression* Divide(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_DIVIDE_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::BinaryExpression* DivideAssign(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3, ::System::Linq::Expressions::LambdaExpression* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_DIVIDEASSIGN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* Modulo(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MODULO_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::BinaryExpression* ModuloAssign(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3, ::System::Linq::Expressions::LambdaExpression* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MODULOASSIGN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* Multiply(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MULTIPLY_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::BinaryExpression* MultiplyAssign(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3, ::System::Linq::Expressions::LambdaExpression* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MULTIPLYASSIGN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* MultiplyAssignChecked(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3, ::System::Linq::Expressions::LambdaExpression* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MULTIPLYASSIGNCHECKED_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* MultiplyChecked(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MULTIPLYCHECKED_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsSimpleShift(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISSIMPLESHIFT_OFFSET))(a1, a2);
		}

		static ::System::Type* GetResultTypeOfShift(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Type*(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETRESULTTYPEOFSHIFT_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::BinaryExpression* LeftShift(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LEFTSHIFT_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::BinaryExpression* LeftShiftAssign(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3, ::System::Linq::Expressions::LambdaExpression* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LEFTSHIFTASSIGN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* RightShift(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_RIGHTSHIFT_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::BinaryExpression* RightShiftAssign(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3, ::System::Linq::Expressions::LambdaExpression* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_RIGHTSHIFTASSIGN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* And(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_AND_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::BinaryExpression* AndAssign(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3, ::System::Linq::Expressions::LambdaExpression* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ANDASSIGN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* Or(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_OR_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::BinaryExpression* OrAssign(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3, ::System::Linq::Expressions::LambdaExpression* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ORASSIGN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* ExclusiveOr(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_EXCLUSIVEOR_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::BinaryExpression* ExclusiveOrAssign(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3, ::System::Linq::Expressions::LambdaExpression* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_EXCLUSIVEORASSIGN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* Power(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_POWER_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::BinaryExpression* PowerAssign(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3, ::System::Linq::Expressions::LambdaExpression* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_POWERASSIGN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* ArrayIndex(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ARRAYINDEX_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::BlockExpression* Block(::System::Type* a1, ::Il2CppArray<::System::Linq::Expressions::Expression*>* a2)
		{
			return ((::System::Linq::Expressions::BlockExpression*(*)(::System::Type*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCK_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::BlockExpression* Block_1(::System::Type* a1, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* a2)
		{
			return ((::System::Linq::Expressions::BlockExpression*(*)(::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCK_1_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::BlockExpression* Block_2(::System::Type* a1, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>* a2, ::Il2CppArray<::System::Linq::Expressions::Expression*>* a3)
		{
			return ((::System::Linq::Expressions::BlockExpression*(*)(::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCK_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::BlockExpression* Block_3(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>* a1, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* a2)
		{
			return ((::System::Linq::Expressions::BlockExpression*(*)(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCK_3_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::BlockExpression* Block_4(::System::Type* a1, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>* a2, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* a3)
		{
			return ((::System::Linq::Expressions::BlockExpression*(*)(::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCK_4_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::BlockExpression* BlockCore(::System::Type* a1, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* a2, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* a3)
		{
			return ((::System::Linq::Expressions::BlockExpression*(*)(::System::Type*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCKCORE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ValidateVariables(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEVARIABLES_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::BlockExpression* GetOptimizedBlockExpression(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* a1)
		{
			return ((::System::Linq::Expressions::BlockExpression*(*)(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETOPTIMIZEDBLOCKEXPRESSION_OFFSET))(a1);
		}

		static ::System::Linq::Expressions::CatchBlock* MakeCatchBlock(::System::Type* a1, ::System::Linq::Expressions::ParameterExpression* a2, ::System::Linq::Expressions::Expression* a3, ::System::Linq::Expressions::Expression* a4)
		{
			return ((::System::Linq::Expressions::CatchBlock*(*)(::System::Type*, ::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKECATCHBLOCK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::ConditionalExpression* Condition(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Linq::Expressions::Expression* a3)
		{
			return ((::System::Linq::Expressions::ConditionalExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONDITION_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::ConditionalExpression* Condition_1(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Linq::Expressions::Expression* a3, ::System::Type* a4)
		{
			return ((::System::Linq::Expressions::ConditionalExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONDITION_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::ConstantExpression* Constant(::System::Object* a1)
		{
			return ((::System::Linq::Expressions::ConstantExpression*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONSTANT_OFFSET))(a1);
		}

		static ::System::Linq::Expressions::ConstantExpression* Constant_1(::System::Object* a1, ::System::Type* a2)
		{
			return ((::System::Linq::Expressions::ConstantExpression*(*)(::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONSTANT_1_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::DefaultExpression* Empty()
		{
			return ((::System::Linq::Expressions::DefaultExpression*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_EMPTY_OFFSET))();
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GET_NODETYPE_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean get_CanReduce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GET_CANREDUCE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* Reduce()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_REDUCE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* VisitChildren(::System::Linq::Expressions::ExpressionVisitor* a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VISITCHILDREN_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ACCEPT_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::Expression* ReduceAndCheck()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_REDUCEANDCHECK_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TOSTRING_OFFSET))(this);
		}

		static ::System::Void RequiresCanRead(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_REQUIRESCANREAD_OFFSET))(a1, a2);
		}

		static ::System::Void RequiresCanWrite(::System::Linq::Expressions::Expression* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_REQUIRESCANWRITE_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::GotoExpression* Goto(::System::Linq::Expressions::LabelTarget* a1, ::System::Linq::Expressions::Expression* a2)
		{
			return ((::System::Linq::Expressions::GotoExpression*(*)(::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GOTO_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::GotoExpression* MakeGoto(::System::Linq::Expressions::GotoExpressionKind a1, ::System::Linq::Expressions::LabelTarget* a2, ::System::Linq::Expressions::Expression* a3, ::System::Type* a4)
		{
			return ((::System::Linq::Expressions::GotoExpression*(*)(::System::Linq::Expressions::GotoExpressionKind, ::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Expression*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEGOTO_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ValidateGoto(::System::Linq::Expressions::LabelTarget* a1, ::System::Linq::Expressions::Expression*& a2, ::System::String* a3, ::System::String* a4, ::System::Type* a5)
		{
			return ((::System::Void(*)(::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Expression*&, ::System::String*, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEGOTO_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void ValidateGotoType(::System::Type* a1, ::System::Linq::Expressions::Expression*& a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Linq::Expressions::Expression*&, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEGOTOTYPE_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::IndexExpression* MakeIndex(::System::Linq::Expressions::Expression* a1, ::System::Reflection::PropertyInfo* a2, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* a3)
		{
			return ((::System::Linq::Expressions::IndexExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::PropertyInfo*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEINDEX_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::IndexExpression* ArrayAccess(::System::Linq::Expressions::Expression* a1, ::Il2CppArray<::System::Linq::Expressions::Expression*>* a2)
		{
			return ((::System::Linq::Expressions::IndexExpression*(*)(::System::Linq::Expressions::Expression*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ARRAYACCESS_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::IndexExpression* ArrayAccess_1(::System::Linq::Expressions::Expression* a1, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* a2)
		{
			return ((::System::Linq::Expressions::IndexExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ARRAYACCESS_1_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::IndexExpression* Property(::System::Linq::Expressions::Expression* a1, ::System::Reflection::PropertyInfo* a2, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* a3)
		{
			return ((::System::Linq::Expressions::IndexExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::PropertyInfo*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PROPERTY_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::IndexExpression* MakeIndexProperty(::System::Linq::Expressions::Expression* a1, ::System::Reflection::PropertyInfo* a2, ::System::String* a3, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* a4)
		{
			return ((::System::Linq::Expressions::IndexExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::PropertyInfo*, ::System::String*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEINDEXPROPERTY_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ValidateIndexedProperty(::System::Linq::Expressions::Expression* a1, ::System::Reflection::PropertyInfo* a2, ::System::String* a3, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*& a4)
		{
			return ((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::PropertyInfo*, ::System::String*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*&))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEINDEXEDPROPERTY_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ValidateAccessor(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2, ::Il2CppArray<::System::Reflection::ParameterInfo*>* a3, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*& a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*&, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEACCESSOR_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void ValidateAccessorArgumentTypes(::System::Reflection::MethodInfo* a1, ::Il2CppArray<::System::Reflection::ParameterInfo*>* a2, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*& a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::System::Reflection::MethodInfo*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*&, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEACCESSORARGUMENTTYPES_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::InvocationExpression* Invoke(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2)
		{
			return ((::System::Linq::Expressions::InvocationExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INVOKE_OFFSET))(a1, a2);
		}

		static ::System::Reflection::MethodInfo* GetInvokeMethod(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETINVOKEMETHOD_OFFSET))(a1);
		}

		static ::System::Linq::Expressions::LabelExpression* Label(::System::Linq::Expressions::LabelTarget* a1, ::System::Linq::Expressions::Expression* a2)
		{
			return ((::System::Linq::Expressions::LabelExpression*(*)(::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LABEL_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::LabelTarget* Label_1(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Linq::Expressions::LabelTarget*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LABEL_1_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::LambdaExpression* CreateLambda(::System::Type* a1, ::System::Linq::Expressions::Expression* a2, ::System::String* a3, ::System::Boolean a4, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* a5)
		{
			return ((::System::Linq::Expressions::LambdaExpression*(*)(::System::Type*, ::System::Linq::Expressions::Expression*, ::System::String*, ::System::Boolean, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CREATELAMBDA_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Linq::Expressions::LambdaExpression* Lambda(::System::Type* a1, ::System::Linq::Expressions::Expression* a2, ::Il2CppArray<::System::Linq::Expressions::ParameterExpression*>* a3)
		{
			return ((::System::Linq::Expressions::LambdaExpression*(*)(::System::Type*, ::System::Linq::Expressions::Expression*, ::Il2CppArray<::System::Linq::Expressions::ParameterExpression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LAMBDA_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::LambdaExpression* Lambda_1(::System::Type* a1, ::System::Linq::Expressions::Expression* a2, ::System::String* a3, ::System::Boolean a4, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>* a5)
		{
			return ((::System::Linq::Expressions::LambdaExpression*(*)(::System::Type*, ::System::Linq::Expressions::Expression*, ::System::String*, ::System::Boolean, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LAMBDA_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void ValidateLambdaArgs(::System::Type* a1, ::System::Linq::Expressions::Expression*& a2, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Linq::Expressions::Expression*&, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATELAMBDAARGS_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::MemberExpression* Field(::System::Linq::Expressions::Expression* a1, ::System::Reflection::FieldInfo* a2)
		{
			return ((::System::Linq::Expressions::MemberExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_FIELD_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::MemberExpression* Field_1(::System::Linq::Expressions::Expression* a1, ::System::String* a2)
		{
			return ((::System::Linq::Expressions::MemberExpression*(*)(::System::Linq::Expressions::Expression*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_FIELD_1_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::MemberExpression* Property_1(::System::Linq::Expressions::Expression* a1, ::System::String* a2)
		{
			return ((::System::Linq::Expressions::MemberExpression*(*)(::System::Linq::Expressions::Expression*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PROPERTY_1_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::MemberExpression* Property_2(::System::Linq::Expressions::Expression* a1, ::System::Reflection::PropertyInfo* a2)
		{
			return ((::System::Linq::Expressions::MemberExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PROPERTY_2_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::MemberExpression* Property_3(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Linq::Expressions::MemberExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PROPERTY_3_OFFSET))(a1, a2);
		}

		static ::System::Reflection::PropertyInfo* GetProperty(::System::Reflection::MethodInfo* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::System::Reflection::MethodInfo*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETPROPERTY_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean CheckMethod(::System::Reflection::MethodInfo* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CHECKMETHOD_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::MemberExpression* MakeMemberAccess(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MemberInfo* a2)
		{
			return ((::System::Linq::Expressions::MemberExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEMEMBERACCESS_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_OFFSET))(a1);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_1(::System::Reflection::MethodInfo* a1, ::System::Linq::Expressions::Expression* a2)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_1_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_2(::System::Reflection::MethodInfo* a1, ::System::Linq::Expressions::Expression* a2, ::System::Linq::Expressions::Expression* a3)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_3(::System::Reflection::MethodInfo* a1, ::System::Linq::Expressions::Expression* a2, ::System::Linq::Expressions::Expression* a3, ::System::Linq::Expressions::Expression* a4)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_3_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_4(::System::Reflection::MethodInfo* a1, ::System::Linq::Expressions::Expression* a2, ::System::Linq::Expressions::Expression* a3, ::System::Linq::Expressions::Expression* a4, ::System::Linq::Expressions::Expression* a5)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_4_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_5(::System::Reflection::MethodInfo* a1, ::System::Linq::Expressions::Expression* a2, ::System::Linq::Expressions::Expression* a3, ::System::Linq::Expressions::Expression* a4, ::System::Linq::Expressions::Expression* a5, ::System::Linq::Expressions::Expression* a6)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_5_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_6(::System::Reflection::MethodInfo* a1, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* a2)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Reflection::MethodInfo*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_6_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_7(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_7_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_8(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2, ::Il2CppArray<::System::Linq::Expressions::Expression*>* a3)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_8_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_9(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2, ::System::Linq::Expressions::Expression* a3)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_9_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_10(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2, ::System::Linq::Expressions::Expression* a3, ::System::Linq::Expressions::Expression* a4)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_10_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_11(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2, ::System::Linq::Expressions::Expression* a3, ::System::Linq::Expressions::Expression* a4, ::System::Linq::Expressions::Expression* a5)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_11_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_12(::System::Linq::Expressions::Expression* a1, ::System::String* a2, ::Il2CppArray<::System::Type*>* a3, ::Il2CppArray<::System::Linq::Expressions::Expression*>* a4)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Linq::Expressions::Expression*, ::System::String*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_12_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_13(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* a3)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_13_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Reflection::ParameterInfo*>* ValidateMethodAndGetParameters(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEMETHODANDGETPARAMETERS_OFFSET))(a1, a2);
		}

		static ::System::Void ValidateStaticOrInstanceMethod(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATESTATICORINSTANCEMETHOD_OFFSET))(a1, a2);
		}

		static ::System::Void ValidateCallInstanceType(::System::Type* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATECALLINSTANCETYPE_OFFSET))(a1, a2);
		}

		static ::System::Void ValidateArgumentTypes(::System::Reflection::MethodBase* a1, ::System::Linq::Expressions::ExpressionType a2, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*& a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::System::Reflection::MethodBase*, ::System::Linq::Expressions::ExpressionType, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*&, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEARGUMENTTYPES_OFFSET))(a1, a2, a3, a4);
		}

		static ::Il2CppArray<::System::Reflection::ParameterInfo*>* GetParametersForValidation(::System::Reflection::MethodBase* a1, ::System::Linq::Expressions::ExpressionType a2)
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::System::Reflection::MethodBase*, ::System::Linq::Expressions::ExpressionType))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETPARAMETERSFORVALIDATION_OFFSET))(a1, a2);
		}

		static ::System::Void ValidateArgumentCount(::System::Reflection::MethodBase* a1, ::System::Linq::Expressions::ExpressionType a2, ::System::Int32 a3, ::Il2CppArray<::System::Reflection::ParameterInfo*>* a4)
		{
			return ((::System::Void(*)(::System::Reflection::MethodBase*, ::System::Linq::Expressions::ExpressionType, ::System::Int32, ::Il2CppArray<::System::Reflection::ParameterInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEARGUMENTCOUNT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::Expression* ValidateOneArgument(::System::Reflection::MethodBase* a1, ::System::Linq::Expressions::ExpressionType a2, ::System::Linq::Expressions::Expression* a3, ::System::Reflection::ParameterInfo* a4, ::System::String* a5, ::System::String* a6)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::System::Reflection::MethodBase*, ::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Reflection::ParameterInfo*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEONEARGUMENT_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean TryQuote(::System::Type* a1, ::System::Linq::Expressions::Expression*& a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Linq::Expressions::Expression*&))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TRYQUOTE_OFFSET))(a1, a2);
		}

		static ::System::Reflection::MethodInfo* FindMethod(::System::Type* a1, ::System::String* a2, ::Il2CppArray<::System::Type*>* a3, ::Il2CppArray<::System::Linq::Expressions::Expression*>* a4, ::System::Reflection::BindingFlags a5)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::String*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_FINDMETHOD_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean IsCompatible(::System::Reflection::MethodBase* a1, ::Il2CppArray<::System::Linq::Expressions::Expression*>* a2)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodBase*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISCOMPATIBLE_OFFSET))(a1, a2);
		}

		static ::System::Reflection::MethodInfo* ApplyTypeArgs(::System::Reflection::MethodInfo* a1, ::Il2CppArray<::System::Type*>* a2)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Reflection::MethodInfo*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_APPLYTYPEARGS_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::NewArrayExpression* NewArrayInit(::System::Type* a1, ::Il2CppArray<::System::Linq::Expressions::Expression*>* a2)
		{
			return ((::System::Linq::Expressions::NewArrayExpression*(*)(::System::Type*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWARRAYINIT_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::NewArrayExpression* NewArrayInit_1(::System::Type* a1, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* a2)
		{
			return ((::System::Linq::Expressions::NewArrayExpression*(*)(::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWARRAYINIT_1_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::NewArrayExpression* NewArrayBounds(::System::Type* a1, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* a2)
		{
			return ((::System::Linq::Expressions::NewArrayExpression*(*)(::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWARRAYBOUNDS_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::NewExpression* New(::System::Reflection::ConstructorInfo* a1, ::Il2CppArray<::System::Linq::Expressions::Expression*>* a2)
		{
			return ((::System::Linq::Expressions::NewExpression*(*)(::System::Reflection::ConstructorInfo*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEW_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::NewExpression* New_1(::System::Reflection::ConstructorInfo* a1, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* a2)
		{
			return ((::System::Linq::Expressions::NewExpression*(*)(::System::Reflection::ConstructorInfo*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEW_1_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::NewExpression* New_2(::System::Reflection::ConstructorInfo* a1, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* a2, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>* a3)
		{
			return ((::System::Linq::Expressions::NewExpression*(*)(::System::Reflection::ConstructorInfo*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEW_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ValidateNewArgs(::System::Reflection::ConstructorInfo* a1, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*& a2, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Reflection::MemberInfo*>*& a3)
		{
			return ((::System::Void(*)(::System::Reflection::ConstructorInfo*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*&, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Reflection::MemberInfo*>*&))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATENEWARGS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ValidateAnonymousTypeMember(::System::Reflection::MemberInfo*& a1, ::System::Type*& a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::Reflection::MemberInfo*&, ::System::Type*&, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEANONYMOUSTYPEMEMBER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ValidateConstructor(::System::Reflection::ConstructorInfo* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Reflection::ConstructorInfo*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATECONSTRUCTOR_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::ParameterExpression* Parameter(::System::Type* a1)
		{
			return ((::System::Linq::Expressions::ParameterExpression*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PARAMETER_OFFSET))(a1);
		}

		static ::System::Linq::Expressions::ParameterExpression* Parameter_1(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Linq::Expressions::ParameterExpression*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PARAMETER_1_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::ParameterExpression* Variable(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Linq::Expressions::ParameterExpression*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VARIABLE_OFFSET))(a1, a2);
		}

		static ::System::Void Validate(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATE_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::TryExpression* TryFinally(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2)
		{
			return ((::System::Linq::Expressions::TryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TRYFINALLY_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::TryExpression* MakeTry(::System::Type* a1, ::System::Linq::Expressions::Expression* a2, ::System::Linq::Expressions::Expression* a3, ::System::Linq::Expressions::Expression* a4, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::CatchBlock*>* a5)
		{
			return ((::System::Linq::Expressions::TryExpression*(*)(::System::Type*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::CatchBlock*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKETRY_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void ValidateTryAndCatchHaveSameType(::System::Type* a1, ::System::Linq::Expressions::Expression* a2, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::CatchBlock*>* a3)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Linq::Expressions::Expression*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::CatchBlock*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATETRYANDCATCHHAVESAMETYPE_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::UnaryExpression* MakeUnary(::System::Linq::Expressions::ExpressionType a1, ::System::Linq::Expressions::Expression* a2, ::System::Type* a3, ::System::Reflection::MethodInfo* a4)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Type*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEUNARY_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::UnaryExpression* GetUserDefinedUnaryOperatorOrThrow(::System::Linq::Expressions::ExpressionType a1, ::System::String* a2, ::System::Linq::Expressions::Expression* a3)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::String*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDUNARYOPERATORORTHROW_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::UnaryExpression* GetUserDefinedUnaryOperator(::System::Linq::Expressions::ExpressionType a1, ::System::String* a2, ::System::Linq::Expressions::Expression* a3)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::String*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDUNARYOPERATOR_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::UnaryExpression* GetMethodBasedUnaryOperator(::System::Linq::Expressions::ExpressionType a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETMETHODBASEDUNARYOPERATOR_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::UnaryExpression* GetUserDefinedCoercionOrThrow(::System::Linq::Expressions::ExpressionType a1, ::System::Linq::Expressions::Expression* a2, ::System::Type* a3)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDCOERCIONORTHROW_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::UnaryExpression* GetUserDefinedCoercion(::System::Linq::Expressions::ExpressionType a1, ::System::Linq::Expressions::Expression* a2, ::System::Type* a3)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDCOERCION_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::UnaryExpression* GetMethodBasedCoercionOperator(::System::Linq::Expressions::ExpressionType a1, ::System::Linq::Expressions::Expression* a2, ::System::Type* a3, ::System::Reflection::MethodInfo* a4)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Type*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETMETHODBASEDCOERCIONOPERATOR_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::UnaryExpression* Negate(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEGATE_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::UnaryExpression* UnaryPlus(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_UNARYPLUS_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::UnaryExpression* NegateChecked(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEGATECHECKED_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::UnaryExpression* Not(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NOT_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::UnaryExpression* IsFalse(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISFALSE_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::UnaryExpression* IsTrue(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISTRUE_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::UnaryExpression* OnesComplement(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ONESCOMPLEMENT_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::UnaryExpression* TypeAs(::System::Linq::Expressions::Expression* a1, ::System::Type* a2)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TYPEAS_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::UnaryExpression* Unbox(::System::Linq::Expressions::Expression* a1, ::System::Type* a2)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_UNBOX_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::UnaryExpression* Convert(::System::Linq::Expressions::Expression* a1, ::System::Type* a2)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONVERT_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::UnaryExpression* Convert_1(::System::Linq::Expressions::Expression* a1, ::System::Type* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Type*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONVERT_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::UnaryExpression* ConvertChecked(::System::Linq::Expressions::Expression* a1, ::System::Type* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Type*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONVERTCHECKED_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::UnaryExpression* ArrayLength(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ARRAYLENGTH_OFFSET))(a1);
		}

		static ::System::Linq::Expressions::UnaryExpression* Quote(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_QUOTE_OFFSET))(a1);
		}

		static ::System::Linq::Expressions::UnaryExpression* Throw(::System::Linq::Expressions::Expression* a1, ::System::Type* a2)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_THROW_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::UnaryExpression* Increment(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INCREMENT_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::UnaryExpression* Decrement(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_DECREMENT_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::UnaryExpression* PreIncrementAssign(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PREINCREMENTASSIGN_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::UnaryExpression* PreDecrementAssign(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PREDECREMENTASSIGN_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::UnaryExpression* PostIncrementAssign(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_POSTINCREMENTASSIGN_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::UnaryExpression* PostDecrementAssign(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_POSTDECREMENTASSIGN_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::UnaryExpression* MakeOpAssignUnary(::System::Linq::Expressions::ExpressionType a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEOPASSIGNUNARY_OFFSET))(a1, a2, a3);
		}
	};
}
