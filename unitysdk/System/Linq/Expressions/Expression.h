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

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x184A4BE0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ADDASSIGNCHECKED_OFFSET UNITYSDK_OFFSET(0x184A1790)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ADDASSIGN_OFFSET UNITYSDK_OFFSET(0x1849F9B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ADDCHECKED_OFFSET UNITYSDK_OFFSET(0x1849BDF0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ADD_OFFSET UNITYSDK_OFFSET(0x1849BB70)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ANDALSO_OFFSET UNITYSDK_OFFSET(0x1849D310)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ANDASSIGN_OFFSET UNITYSDK_OFFSET(0x1849FC90)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_AND_OFFSET UNITYSDK_OFFSET(0x1849D080)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_APPLYTYPEARGS_OFFSET UNITYSDK_OFFSET(0x184AB8D0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ARRAYACCESS_1_OFFSET UNITYSDK_OFFSET(0x184A5270)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ARRAYACCESS_OFFSET UNITYSDK_OFFSET(0x184A56B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ARRAYINDEX_OFFSET UNITYSDK_OFFSET(0x1849F320)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ARRAYLENGTH_OFFSET UNITYSDK_OFFSET(0x184AFDD0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ASSIGN_OFFSET UNITYSDK_OFFSET(0x1848CE20)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCKCORE_OFFSET UNITYSDK_OFFSET(0x184A3F30)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCK_1_OFFSET UNITYSDK_OFFSET(0x184A2DE0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCK_2_OFFSET UNITYSDK_OFFSET(0x184A30A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCK_3_OFFSET UNITYSDK_OFFSET(0x1848D2C0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCK_4_OFFSET UNITYSDK_OFFSET(0x184A2E70)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCK_OFFSET UNITYSDK_OFFSET(0x184A2C80)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_10_OFFSET UNITYSDK_OFFSET(0x184AAC10)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_11_OFFSET UNITYSDK_OFFSET(0x184AAFC0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_12_OFFSET UNITYSDK_OFFSET(0x1848E610)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_13_OFFSET UNITYSDK_OFFSET(0x184A98F0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_1_OFFSET UNITYSDK_OFFSET(0x1848E7D0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_2_OFFSET UNITYSDK_OFFSET(0x1848E9E0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_3_OFFSET UNITYSDK_OFFSET(0x184A8D00)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_4_OFFSET UNITYSDK_OFFSET(0x184A9040)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_5_OFFSET UNITYSDK_OFFSET(0x184A9420)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_6_OFFSET UNITYSDK_OFFSET(0x184A9890)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_7_OFFSET UNITYSDK_OFFSET(0x184AA610)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_8_OFFSET UNITYSDK_OFFSET(0x184AA890)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_9_OFFSET UNITYSDK_OFFSET(0x184AA900)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_OFFSET UNITYSDK_OFFSET(0x184A8A00)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CHECKMETHOD_OFFSET UNITYSDK_OFFSET(0x184A8870)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_COALESCE_OFFSET UNITYSDK_OFFSET(0x1849EB90)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONDITION_1_OFFSET UNITYSDK_OFFSET(0x184919F0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONDITION_OFFSET UNITYSDK_OFFSET(0x1848F040)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONSTANT_1_OFFSET UNITYSDK_OFFSET(0x1848ED00)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONSTANT_OFFSET UNITYSDK_OFFSET(0x184A4610)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONVERTCHECKED_OFFSET UNITYSDK_OFFSET(0x184B01F0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONVERT_1_OFFSET UNITYSDK_OFFSET(0x184AFFD0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONVERT_OFFSET UNITYSDK_OFFSET(0x1848EC90)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CREATELAMBDA_OFFSET UNITYSDK_OFFSET(0x184A6BB0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_DECREMENT_OFFSET UNITYSDK_OFFSET(0x184B0F00)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_DIVIDEASSIGN_OFFSET UNITYSDK_OFFSET(0x1849FF80)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_DIVIDE_OFFSET UNITYSDK_OFFSET(0x1849CA70)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_EMPTY_OFFSET UNITYSDK_OFFSET(0x184A46A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_EQUAL_OFFSET UNITYSDK_OFFSET(0x1849E760)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_EXCLUSIVEORASSIGN_OFFSET UNITYSDK_OFFSET(0x184A0260)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_EXCLUSIVEOR_OFFSET UNITYSDK_OFFSET(0x1849E900)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_FIELD_1_OFFSET UNITYSDK_OFFSET(0x184A7FA0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_FIELD_OFFSET UNITYSDK_OFFSET(0x184A7CB0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_FINDMETHOD_OFFSET UNITYSDK_OFFSET(0x184AB410)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETCOMPARISONOPERATOR_OFFSET UNITYSDK_OFFSET(0x184A2530)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETEQUALITYCOMPARISONOPERATOR_OFFSET UNITYSDK_OFFSET(0x184A2030)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETINVOKEMETHOD_OFFSET UNITYSDK_OFFSET(0x184A6710)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETMETHODBASEDASSIGNOPERATOR_OFFSET UNITYSDK_OFFSET(0x18499DB0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETMETHODBASEDBINARYOPERATOR_OFFSET UNITYSDK_OFFSET(0x18499030)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETMETHODBASEDCOERCIONOPERATOR_OFFSET UNITYSDK_OFFSET(0x184B2090)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETMETHODBASEDUNARYOPERATOR_OFFSET UNITYSDK_OFFSET(0x184B1910)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETOPTIMIZEDBLOCKEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184A32C0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETPARAMETERSFORVALIDATION_OFFSET UNITYSDK_OFFSET(0x184A6940)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0x184A8680)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETRESULTTYPEOFSHIFT_OFFSET UNITYSDK_OFFSET(0x184A2AE0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDASSIGNOPERATORORTHROW_OFFSET UNITYSDK_OFFSET(0x1849A620)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDBINARYOPERATORORTHROW_OFFSET UNITYSDK_OFFSET(0x1849A3A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDBINARYOPERATOR_1_OFFSET UNITYSDK_OFFSET(0x18498CB0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDBINARYOPERATOR_OFFSET UNITYSDK_OFFSET(0x18498880)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDCOERCIONORTHROW_OFFSET UNITYSDK_OFFSET(0x184B1F00)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDCOERCION_OFFSET UNITYSDK_OFFSET(0x184B1FA0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDUNARYOPERATORORTHROW_OFFSET UNITYSDK_OFFSET(0x184B12D0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDUNARYOPERATOR_OFFSET UNITYSDK_OFFSET(0x184B1480)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GET_CANREDUCE_OFFSET UNITYSDK_OFFSET(0x184A4990)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x184A4750)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x184A4870)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GOTO_OFFSET UNITYSDK_OFFSET(0x184A4D10)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1849E690)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1849E5C0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INCREMENT_OFFSET UNITYSDK_OFFSET(0x184B0CF0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1848CC30)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISCOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x184AB970)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISFALSE_OFFSET UNITYSDK_OFFSET(0x184AF860)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISLIFTINGCONDITIONALLOGICALOPERATOR_OFFSET UNITYSDK_OFFSET(0x1849A900)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISNULLCOMPARISON_OFFSET UNITYSDK_OFFSET(0x1849AA90)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISNULLCONSTANT_OFFSET UNITYSDK_OFFSET(0x1849AD00)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISSIMPLESHIFT_OFFSET UNITYSDK_OFFSET(0x184A2A00)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISTRUE_OFFSET UNITYSDK_OFFSET(0x184AFA10)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISVALIDLIFTEDCONDITIONALLOGICALOPERATOR_OFFSET UNITYSDK_OFFSET(0x1849B700)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LABEL_1_OFFSET UNITYSDK_OFFSET(0x184A6AF0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LABEL_OFFSET UNITYSDK_OFFSET(0x184A6A00)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LAMBDA_1_OFFSET UNITYSDK_OFFSET(0x184A7390)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LAMBDA_OFFSET UNITYSDK_OFFSET(0x184A7290)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LEFTSHIFTASSIGN_OFFSET UNITYSDK_OFFSET(0x184A0550)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LEFTSHIFT_OFFSET UNITYSDK_OFFSET(0x1849F760)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1849E4F0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1849E420)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEBINARY_1_OFFSET UNITYSDK_OFFSET(0x1848AD60)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEBINARY_OFFSET UNITYSDK_OFFSET(0x1848CBA0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKECATCHBLOCK_OFFSET UNITYSDK_OFFSET(0x18491110)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEGOTO_OFFSET UNITYSDK_OFFSET(0x184A4D90)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEINDEXPROPERTY_OFFSET UNITYSDK_OFFSET(0x184A5780)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEINDEX_OFFSET UNITYSDK_OFFSET(0x1848D610)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEMEMBERACCESS_OFFSET UNITYSDK_OFFSET(0x1848D150)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEOPASSIGNUNARY_OFFSET UNITYSDK_OFFSET(0x184B2620)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKETRY_OFFSET UNITYSDK_OFFSET(0x184ADCC0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEUNARY_OFFSET UNITYSDK_OFFSET(0x184AE980)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MODULOASSIGN_OFFSET UNITYSDK_OFFSET(0x184A0800)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MODULO_OFFSET UNITYSDK_OFFSET(0x1849CCF0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MULTIPLYASSIGNCHECKED_OFFSET UNITYSDK_OFFSET(0x184A1D50)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MULTIPLYASSIGN_OFFSET UNITYSDK_OFFSET(0x184A0AE0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MULTIPLYCHECKED_OFFSET UNITYSDK_OFFSET(0x1849C7F0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1849C570)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEGATECHECKED_OFFSET UNITYSDK_OFFSET(0x184AF330)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEGATE_OFFSET UNITYSDK_OFFSET(0x184AF060)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWARRAYBOUNDS_OFFSET UNITYSDK_OFFSET(0x184AC390)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWARRAYINIT_1_OFFSET UNITYSDK_OFFSET(0x184ABCE0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWARRAYINIT_OFFSET UNITYSDK_OFFSET(0x184ABC80)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEW_1_OFFSET UNITYSDK_OFFSET(0x184AC750)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEW_2_OFFSET UNITYSDK_OFFSET(0x184ACA70)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEW_OFFSET UNITYSDK_OFFSET(0x184AC6F0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NOTEQUAL_OFFSET UNITYSDK_OFFSET(0x1849E830)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NOT_OFFSET UNITYSDK_OFFSET(0x184AF600)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ONESCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x184AFBC0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ORASSIGN_OFFSET UNITYSDK_OFFSET(0x184A0DC0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ORELSE_OFFSET UNITYSDK_OFFSET(0x1849DD00)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_OR_OFFSET UNITYSDK_OFFSET(0x1849DA70)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PARAMETERISASSIGNABLE_OFFSET UNITYSDK_OFFSET(0x18499BA0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PARAMETER_1_OFFSET UNITYSDK_OFFSET(0x1848E360)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PARAMETER_OFFSET UNITYSDK_OFFSET(0x184ADB00)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_POSTDECREMENTASSIGN_OFFSET UNITYSDK_OFFSET(0x184B1260)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_POSTINCREMENTASSIGN_OFFSET UNITYSDK_OFFSET(0x184B1180)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_POWERASSIGN_OFFSET UNITYSDK_OFFSET(0x184A10B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_POWER_OFFSET UNITYSDK_OFFSET(0x1849CF70)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PREDECREMENTASSIGN_OFFSET UNITYSDK_OFFSET(0x184B11F0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PREINCREMENTASSIGN_OFFSET UNITYSDK_OFFSET(0x184B1110)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PROPERTY_1_OFFSET UNITYSDK_OFFSET(0x1848E400)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PROPERTY_2_OFFSET UNITYSDK_OFFSET(0x184A8140)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PROPERTY_3_OFFSET UNITYSDK_OFFSET(0x184A8510)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PROPERTY_OFFSET UNITYSDK_OFFSET(0x184A51F0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_QUOTE_OFFSET UNITYSDK_OFFSET(0x18482440)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_REDUCEANDCHECK_OFFSET UNITYSDK_OFFSET(0x184A4A80)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_REDUCE_OFFSET UNITYSDK_OFFSET(0x184A49A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_REFERENCEEQUAL_OFFSET UNITYSDK_OFFSET(0x1848A9E0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_REFERENCENOTEQUAL_OFFSET UNITYSDK_OFFSET(0x1848AB50)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_REQUIRESCANREAD_OFFSET UNITYSDK_OFFSET(0x184A3110)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_REQUIRESCANWRITE_OFFSET UNITYSDK_OFFSET(0x184986D0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_RIGHTSHIFTASSIGN_OFFSET UNITYSDK_OFFSET(0x184A1200)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_RIGHTSHIFT_OFFSET UNITYSDK_OFFSET(0x1849F510)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SUBTRACTASSIGNCHECKED_OFFSET UNITYSDK_OFFSET(0x184A1A70)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SUBTRACTASSIGN_OFFSET UNITYSDK_OFFSET(0x184A14B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SUBTRACTCHECKED_OFFSET UNITYSDK_OFFSET(0x1849C2F0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x1849C070)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_THROW_OFFSET UNITYSDK_OFFSET(0x184B0480)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x184A29F0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TRYFINALLY_OFFSET UNITYSDK_OFFSET(0x184ADC50)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TRYQUOTE_OFFSET UNITYSDK_OFFSET(0x184A51E0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TYPEAS_OFFSET UNITYSDK_OFFSET(0x184B06A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_UNARYPLUS_OFFSET UNITYSDK_OFFSET(0x184B0870)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_UNBOX_OFFSET UNITYSDK_OFFSET(0x184B0A80)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEACCESSORARGUMENTTYPES_OFFSET UNITYSDK_OFFSET(0x184A61B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEACCESSOR_OFFSET UNITYSDK_OFFSET(0x184A5E40)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEANONYMOUSTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x184AD8F0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x184A69C0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEARGUMENTTYPES_OFFSET UNITYSDK_OFFSET(0x184AB850)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATECALLINSTANCETYPE_OFFSET UNITYSDK_OFFSET(0x184A6130)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATECOALESCEARGTYPES_OFFSET UNITYSDK_OFFSET(0x184A2870)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATECONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x184ACA00)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEGOTOTYPE_OFFSET UNITYSDK_OFFSET(0x184A5070)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEGOTO_OFFSET UNITYSDK_OFFSET(0x184A4E90)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEINDEXEDPROPERTY_OFFSET UNITYSDK_OFFSET(0x184A5860)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATELAMBDAARGS_OFFSET UNITYSDK_OFFSET(0x184A7430)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEMETHODANDGETPARAMETERS_OFFSET UNITYSDK_OFFSET(0x184A8BA0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEMETHODINFO_OFFSET UNITYSDK_OFFSET(0x1849AA00)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATENEWARGS_OFFSET UNITYSDK_OFFSET(0x184ACD20)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEONEARGUMENT_OFFSET UNITYSDK_OFFSET(0x184A69D0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEOPASSIGNCONVERSIONLAMBDA_OFFSET UNITYSDK_OFFSET(0x1849A0B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEOPERATOR_OFFSET UNITYSDK_OFFSET(0x18499A10)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEPARAMSWITHOPERANDSORTHROW_OFFSET UNITYSDK_OFFSET(0x18499C80)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATESTATICORINSTANCEMETHOD_OFFSET UNITYSDK_OFFSET(0x184AB710)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATETRYANDCATCHHAVESAMETYPE_OFFSET UNITYSDK_OFFSET(0x184ADEE0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEUSERDEFINEDCONDITIONALLOGICOPERATOR_OFFSET UNITYSDK_OFFSET(0x1849AD70)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEVARIABLES_OFFSET UNITYSDK_OFFSET(0x184A4370)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATE_OFFSET UNITYSDK_OFFSET(0x184ADB60)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VARIABLE_OFFSET UNITYSDK_OFFSET(0x1848D0E0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VERIFYOPTRUEFALSE_OFFSET UNITYSDK_OFFSET(0x1849B800)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VISITCHILDREN_OFFSET UNITYSDK_OFFSET(0x184A4A00)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION__CCTOR_OFFSET UNITYSDK_OFFSET(0x184B2990)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1848A670)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Expression_TypeDefinitionIndex = 3175;

	class Expression : public ::System::Object
	{
	public:
		static ::System::Dynamic::Utils::CacheDict_2<::System::Type*, ::System::Reflection::MethodInfo*>** StaticGet_s_lambdaDelegateCache()
		{
			return (::System::Dynamic::Utils::CacheDict_2<::System::Type*, ::System::Reflection::MethodInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Expression_TypeDefinitionIndex)->GetStaticField(0xEB40);
		}
		static ::System::Dynamic::Utils::CacheDict_2<::System::Type*, ::System::Func_5<::System::Linq::Expressions::Expression*, ::System::String*, ::System::Boolean, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*, ::System::Linq::Expressions::LambdaExpression*>*>** StaticGet_s_lambdaFactories()
		{
			return (::System::Dynamic::Utils::CacheDict_2<::System::Type*, ::System::Func_5<::System::Linq::Expressions::Expression*, ::System::String*, ::System::Boolean, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*, ::System::Linq::Expressions::LambdaExpression*>*>**)Il2CppClass::FromTypeDefinitionIndex(Expression_TypeDefinitionIndex)->GetStaticField(0xEB48);
		}
		static ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression_ExtensionInfo*>** StaticGet_s_legacyCtorSupportTable()
		{
			return (::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression_ExtensionInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Expression_TypeDefinitionIndex)->GetStaticField(0xEB50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION__CCTOR_OFFSET))();
		}

		static ::System::Linq::Expressions::BinaryExpression* Assign(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ASSIGN_OFFSET))(left, right);
		}

		static ::System::Linq::Expressions::BinaryExpression* GetUserDefinedBinaryOperator(::System::Linq::Expressions::ExpressionType binaryType, ::System::String* name, ::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Boolean liftToNull)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::String*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDBINARYOPERATOR_OFFSET))(binaryType, name, left, right, liftToNull);
		}

		static ::System::Linq::Expressions::BinaryExpression* GetMethodBasedBinaryOperator(::System::Linq::Expressions::ExpressionType binaryType, ::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Reflection::MethodInfo* method, ::System::Boolean liftToNull)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETMETHODBASEDBINARYOPERATOR_OFFSET))(binaryType, left, right, method, liftToNull);
		}

		static ::System::Linq::Expressions::BinaryExpression* GetMethodBasedAssignOperator(::System::Linq::Expressions::ExpressionType binaryType, ::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion, ::System::Boolean liftToNull)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETMETHODBASEDASSIGNOPERATOR_OFFSET))(binaryType, left, right, method, conversion, liftToNull);
		}

		static ::System::Linq::Expressions::BinaryExpression* GetUserDefinedBinaryOperatorOrThrow(::System::Linq::Expressions::ExpressionType binaryType, ::System::String* name, ::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Boolean liftToNull)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::String*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDBINARYOPERATORORTHROW_OFFSET))(binaryType, name, left, right, liftToNull);
		}

		static ::System::Linq::Expressions::BinaryExpression* GetUserDefinedAssignOperatorOrThrow(::System::Linq::Expressions::ExpressionType binaryType, ::System::String* name, ::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Linq::Expressions::LambdaExpression* conversion, ::System::Boolean liftToNull)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::String*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::LambdaExpression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDASSIGNOPERATORORTHROW_OFFSET))(binaryType, name, left, right, conversion, liftToNull);
		}

		static ::System::Reflection::MethodInfo* GetUserDefinedBinaryOperator_1(::System::Linq::Expressions::ExpressionType binaryType, ::System::Type* leftType, ::System::Type* rightType, ::System::String* name)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Linq::Expressions::ExpressionType, ::System::Type*, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDBINARYOPERATOR_1_OFFSET))(binaryType, leftType, rightType, name);
		}

		static ::System::Boolean IsLiftingConditionalLogicalOperator(::System::Type* left, ::System::Type* right, ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::ExpressionType binaryType)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::ExpressionType))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISLIFTINGCONDITIONALLOGICALOPERATOR_OFFSET))(left, right, method, binaryType);
		}

		static ::System::Boolean ParameterIsAssignable(::System::Reflection::ParameterInfo* pi, ::System::Type* argType)
		{
			return ((::System::Boolean(*)(::System::Reflection::ParameterInfo*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PARAMETERISASSIGNABLE_OFFSET))(pi, argType);
		}

		static ::System::Void ValidateParamswithOperandsOrThrow(::System::Type* paramType, ::System::Type* operandType, ::System::Linq::Expressions::ExpressionType exprType, ::System::String* name)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Type*, ::System::Linq::Expressions::ExpressionType, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEPARAMSWITHOPERANDSORTHROW_OFFSET))(paramType, operandType, exprType, name);
		}

		static ::System::Void ValidateOperator(::System::Reflection::MethodInfo* method)
		{
			return ((::System::Void(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEOPERATOR_OFFSET))(method);
		}

		static ::System::Void ValidateMethodInfo(::System::Reflection::MethodInfo* method, ::System::String* paramName)
		{
			return ((::System::Void(*)(::System::Reflection::MethodInfo*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEMETHODINFO_OFFSET))(method, paramName);
		}

		static ::System::Boolean IsNullComparison(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right)
		{
			return ((::System::Boolean(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISNULLCOMPARISON_OFFSET))(left, right);
		}

		static ::System::Boolean IsNullConstant(::System::Linq::Expressions::Expression* e)
		{
			return ((::System::Boolean(*)(::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISNULLCONSTANT_OFFSET))(e);
		}

		static ::System::Void ValidateUserDefinedConditionalLogicOperator(::System::Linq::Expressions::ExpressionType nodeType, ::System::Type* left, ::System::Type* right, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Void(*)(::System::Linq::Expressions::ExpressionType, ::System::Type*, ::System::Type*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEUSERDEFINEDCONDITIONALLOGICOPERATOR_OFFSET))(nodeType, left, right, method);
		}

		static ::System::Void VerifyOpTrueFalse(::System::Linq::Expressions::ExpressionType nodeType, ::System::Type* left, ::System::Reflection::MethodInfo* opTrue, ::System::String* paramName)
		{
			return ((::System::Void(*)(::System::Linq::Expressions::ExpressionType, ::System::Type*, ::System::Reflection::MethodInfo*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VERIFYOPTRUEFALSE_OFFSET))(nodeType, left, opTrue, paramName);
		}

		static ::System::Boolean IsValidLiftedConditionalLogicalOperator(::System::Type* left, ::System::Type* right, ::Il2CppArray<::System::Reflection::ParameterInfo*>* pms)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISVALIDLIFTEDCONDITIONALLOGICALOPERATOR_OFFSET))(left, right, pms);
		}

		static ::System::Linq::Expressions::BinaryExpression* MakeBinary(::System::Linq::Expressions::ExpressionType binaryType, ::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Boolean liftToNull, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEBINARY_OFFSET))(binaryType, left, right, liftToNull, method);
		}

		static ::System::Linq::Expressions::BinaryExpression* MakeBinary_1(::System::Linq::Expressions::ExpressionType binaryType, ::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Boolean liftToNull, ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEBINARY_1_OFFSET))(binaryType, left, right, liftToNull, method, conversion);
		}

		static ::System::Linq::Expressions::BinaryExpression* Equal(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Boolean liftToNull, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_EQUAL_OFFSET))(left, right, liftToNull, method);
		}

		static ::System::Linq::Expressions::BinaryExpression* ReferenceEqual(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_REFERENCEEQUAL_OFFSET))(left, right);
		}

		static ::System::Linq::Expressions::BinaryExpression* NotEqual(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Boolean liftToNull, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NOTEQUAL_OFFSET))(left, right, liftToNull, method);
		}

		static ::System::Linq::Expressions::BinaryExpression* ReferenceNotEqual(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_REFERENCENOTEQUAL_OFFSET))(left, right);
		}

		static ::System::Linq::Expressions::BinaryExpression* GetEqualityComparisonOperator(::System::Linq::Expressions::ExpressionType binaryType, ::System::String* opName, ::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Boolean liftToNull)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::String*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETEQUALITYCOMPARISONOPERATOR_OFFSET))(binaryType, opName, left, right, liftToNull);
		}

		static ::System::Linq::Expressions::BinaryExpression* GreaterThan(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Boolean liftToNull, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GREATERTHAN_OFFSET))(left, right, liftToNull, method);
		}

		static ::System::Linq::Expressions::BinaryExpression* LessThan(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Boolean liftToNull, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LESSTHAN_OFFSET))(left, right, liftToNull, method);
		}

		static ::System::Linq::Expressions::BinaryExpression* GreaterThanOrEqual(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Boolean liftToNull, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GREATERTHANOREQUAL_OFFSET))(left, right, liftToNull, method);
		}

		static ::System::Linq::Expressions::BinaryExpression* LessThanOrEqual(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Boolean liftToNull, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LESSTHANOREQUAL_OFFSET))(left, right, liftToNull, method);
		}

		static ::System::Linq::Expressions::BinaryExpression* GetComparisonOperator(::System::Linq::Expressions::ExpressionType binaryType, ::System::String* opName, ::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Boolean liftToNull)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::String*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETCOMPARISONOPERATOR_OFFSET))(binaryType, opName, left, right, liftToNull);
		}

		static ::System::Linq::Expressions::BinaryExpression* AndAlso(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ANDALSO_OFFSET))(left, right, method);
		}

		static ::System::Linq::Expressions::BinaryExpression* OrElse(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ORELSE_OFFSET))(left, right, method);
		}

		static ::System::Linq::Expressions::BinaryExpression* Coalesce(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Linq::Expressions::LambdaExpression* conversion)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_COALESCE_OFFSET))(left, right, conversion);
		}

		static ::System::Type* ValidateCoalesceArgTypes(::System::Type* left, ::System::Type* right)
		{
			return ((::System::Type*(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATECOALESCEARGTYPES_OFFSET))(left, right);
		}

		static ::System::Linq::Expressions::BinaryExpression* Add(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ADD_OFFSET))(left, right, method);
		}

		static ::System::Linq::Expressions::BinaryExpression* AddAssign(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ADDASSIGN_OFFSET))(left, right, method, conversion);
		}

		static ::System::Void ValidateOpAssignConversionLambda(::System::Linq::Expressions::LambdaExpression* conversion, ::System::Linq::Expressions::Expression* left, ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::ExpressionType nodeType)
		{
			return ((::System::Void(*)(::System::Linq::Expressions::LambdaExpression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::ExpressionType))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEOPASSIGNCONVERSIONLAMBDA_OFFSET))(conversion, left, method, nodeType);
		}

		static ::System::Linq::Expressions::BinaryExpression* AddAssignChecked(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ADDASSIGNCHECKED_OFFSET))(left, right, method, conversion);
		}

		static ::System::Linq::Expressions::BinaryExpression* AddChecked(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ADDCHECKED_OFFSET))(left, right, method);
		}

		static ::System::Linq::Expressions::BinaryExpression* Subtract(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SUBTRACT_OFFSET))(left, right, method);
		}

		static ::System::Linq::Expressions::BinaryExpression* SubtractAssign(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SUBTRACTASSIGN_OFFSET))(left, right, method, conversion);
		}

		static ::System::Linq::Expressions::BinaryExpression* SubtractAssignChecked(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SUBTRACTASSIGNCHECKED_OFFSET))(left, right, method, conversion);
		}

		static ::System::Linq::Expressions::BinaryExpression* SubtractChecked(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SUBTRACTCHECKED_OFFSET))(left, right, method);
		}

		static ::System::Linq::Expressions::BinaryExpression* Divide(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_DIVIDE_OFFSET))(left, right, method);
		}

		static ::System::Linq::Expressions::BinaryExpression* DivideAssign(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_DIVIDEASSIGN_OFFSET))(left, right, method, conversion);
		}

		static ::System::Linq::Expressions::BinaryExpression* Modulo(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MODULO_OFFSET))(left, right, method);
		}

		static ::System::Linq::Expressions::BinaryExpression* ModuloAssign(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MODULOASSIGN_OFFSET))(left, right, method, conversion);
		}

		static ::System::Linq::Expressions::BinaryExpression* Multiply(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MULTIPLY_OFFSET))(left, right, method);
		}

		static ::System::Linq::Expressions::BinaryExpression* MultiplyAssign(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MULTIPLYASSIGN_OFFSET))(left, right, method, conversion);
		}

		static ::System::Linq::Expressions::BinaryExpression* MultiplyAssignChecked(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MULTIPLYASSIGNCHECKED_OFFSET))(left, right, method, conversion);
		}

		static ::System::Linq::Expressions::BinaryExpression* MultiplyChecked(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MULTIPLYCHECKED_OFFSET))(left, right, method);
		}

		static ::System::Boolean IsSimpleShift(::System::Type* left, ::System::Type* right)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISSIMPLESHIFT_OFFSET))(left, right);
		}

		static ::System::Type* GetResultTypeOfShift(::System::Type* left, ::System::Type* right)
		{
			return ((::System::Type*(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETRESULTTYPEOFSHIFT_OFFSET))(left, right);
		}

		static ::System::Linq::Expressions::BinaryExpression* LeftShift(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LEFTSHIFT_OFFSET))(left, right, method);
		}

		static ::System::Linq::Expressions::BinaryExpression* LeftShiftAssign(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LEFTSHIFTASSIGN_OFFSET))(left, right, method, conversion);
		}

		static ::System::Linq::Expressions::BinaryExpression* RightShift(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_RIGHTSHIFT_OFFSET))(left, right, method);
		}

		static ::System::Linq::Expressions::BinaryExpression* RightShiftAssign(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_RIGHTSHIFTASSIGN_OFFSET))(left, right, method, conversion);
		}

		static ::System::Linq::Expressions::BinaryExpression* And(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_AND_OFFSET))(left, right, method);
		}

		static ::System::Linq::Expressions::BinaryExpression* AndAssign(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ANDASSIGN_OFFSET))(left, right, method, conversion);
		}

		static ::System::Linq::Expressions::BinaryExpression* Or(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_OR_OFFSET))(left, right, method);
		}

		static ::System::Linq::Expressions::BinaryExpression* OrAssign(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ORASSIGN_OFFSET))(left, right, method, conversion);
		}

		static ::System::Linq::Expressions::BinaryExpression* ExclusiveOr(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_EXCLUSIVEOR_OFFSET))(left, right, method);
		}

		static ::System::Linq::Expressions::BinaryExpression* ExclusiveOrAssign(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_EXCLUSIVEORASSIGN_OFFSET))(left, right, method, conversion);
		}

		static ::System::Linq::Expressions::BinaryExpression* Power(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_POWER_OFFSET))(left, right, method);
		}

		static ::System::Linq::Expressions::BinaryExpression* PowerAssign(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_POWERASSIGN_OFFSET))(left, right, method, conversion);
		}

		static ::System::Linq::Expressions::BinaryExpression* ArrayIndex(::System::Linq::Expressions::Expression* array, ::System::Linq::Expressions::Expression* index)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ARRAYINDEX_OFFSET))(array, index);
		}

		static ::System::Linq::Expressions::BlockExpression* Block(::System::Type* type, ::Il2CppArray<::System::Linq::Expressions::Expression*>* expressions)
		{
			return ((::System::Linq::Expressions::BlockExpression*(*)(::System::Type*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCK_OFFSET))(type, expressions);
		}

		static ::System::Linq::Expressions::BlockExpression* Block_1(::System::Type* type, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* expressions)
		{
			return ((::System::Linq::Expressions::BlockExpression*(*)(::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCK_1_OFFSET))(type, expressions);
		}

		static ::System::Linq::Expressions::BlockExpression* Block_2(::System::Type* type, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>* variables, ::Il2CppArray<::System::Linq::Expressions::Expression*>* expressions)
		{
			return ((::System::Linq::Expressions::BlockExpression*(*)(::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCK_2_OFFSET))(type, variables, expressions);
		}

		static ::System::Linq::Expressions::BlockExpression* Block_3(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>* variables, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* expressions)
		{
			return ((::System::Linq::Expressions::BlockExpression*(*)(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCK_3_OFFSET))(variables, expressions);
		}

		static ::System::Linq::Expressions::BlockExpression* Block_4(::System::Type* type, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>* variables, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* expressions)
		{
			return ((::System::Linq::Expressions::BlockExpression*(*)(::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCK_4_OFFSET))(type, variables, expressions);
		}

		static ::System::Linq::Expressions::BlockExpression* BlockCore(::System::Type* type, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* variables, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* expressions)
		{
			return ((::System::Linq::Expressions::BlockExpression*(*)(::System::Type*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCKCORE_OFFSET))(type, variables, expressions);
		}

		static ::System::Void ValidateVariables(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* varList, ::System::String* collectionName)
		{
			return ((::System::Void(*)(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEVARIABLES_OFFSET))(varList, collectionName);
		}

		static ::System::Linq::Expressions::BlockExpression* GetOptimizedBlockExpression(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* expressions)
		{
			return ((::System::Linq::Expressions::BlockExpression*(*)(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETOPTIMIZEDBLOCKEXPRESSION_OFFSET))(expressions);
		}

		static ::System::Linq::Expressions::CatchBlock* MakeCatchBlock(::System::Type* type, ::System::Linq::Expressions::ParameterExpression* variable, ::System::Linq::Expressions::Expression* body, ::System::Linq::Expressions::Expression* filter)
		{
			return ((::System::Linq::Expressions::CatchBlock*(*)(::System::Type*, ::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKECATCHBLOCK_OFFSET))(type, variable, body, filter);
		}

		static ::System::Linq::Expressions::ConditionalExpression* Condition(::System::Linq::Expressions::Expression* test, ::System::Linq::Expressions::Expression* ifTrue, ::System::Linq::Expressions::Expression* ifFalse)
		{
			return ((::System::Linq::Expressions::ConditionalExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONDITION_OFFSET))(test, ifTrue, ifFalse);
		}

		static ::System::Linq::Expressions::ConditionalExpression* Condition_1(::System::Linq::Expressions::Expression* test, ::System::Linq::Expressions::Expression* ifTrue, ::System::Linq::Expressions::Expression* ifFalse, ::System::Type* type)
		{
			return ((::System::Linq::Expressions::ConditionalExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONDITION_1_OFFSET))(test, ifTrue, ifFalse, type);
		}

		static ::System::Linq::Expressions::ConstantExpression* Constant(::System::Object* value)
		{
			return ((::System::Linq::Expressions::ConstantExpression*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONSTANT_OFFSET))(value);
		}

		static ::System::Linq::Expressions::ConstantExpression* Constant_1(::System::Object* value, ::System::Type* type)
		{
			return ((::System::Linq::Expressions::ConstantExpression*(*)(::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONSTANT_1_OFFSET))(value, type);
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

		::System::Linq::Expressions::Expression* VisitChildren(::System::Linq::Expressions::ExpressionVisitor* visitor)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VISITCHILDREN_OFFSET))(this, visitor);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ACCEPT_OFFSET))(this, visitor);
		}

		::System::Linq::Expressions::Expression* ReduceAndCheck()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_REDUCEANDCHECK_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TOSTRING_OFFSET))(this);
		}

		static ::System::Void RequiresCanRead(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* items, ::System::String* paramName)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_REQUIRESCANREAD_OFFSET))(items, paramName);
		}

		static ::System::Void RequiresCanWrite(::System::Linq::Expressions::Expression* expression, ::System::String* paramName)
		{
			return ((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_REQUIRESCANWRITE_OFFSET))(expression, paramName);
		}

		static ::System::Linq::Expressions::GotoExpression* Goto(::System::Linq::Expressions::LabelTarget* target, ::System::Linq::Expressions::Expression* value)
		{
			return ((::System::Linq::Expressions::GotoExpression*(*)(::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GOTO_OFFSET))(target, value);
		}

		static ::System::Linq::Expressions::GotoExpression* MakeGoto(::System::Linq::Expressions::GotoExpressionKind kind, ::System::Linq::Expressions::LabelTarget* target, ::System::Linq::Expressions::Expression* value, ::System::Type* type)
		{
			return ((::System::Linq::Expressions::GotoExpression*(*)(::System::Linq::Expressions::GotoExpressionKind, ::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Expression*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEGOTO_OFFSET))(kind, target, value, type);
		}

		static ::System::Void ValidateGoto(::System::Linq::Expressions::LabelTarget* target, ::System::Linq::Expressions::Expression*& value, ::System::String* targetParameter, ::System::String* valueParameter, ::System::Type* type)
		{
			return ((::System::Void(*)(::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Expression*&, ::System::String*, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEGOTO_OFFSET))(target, value, targetParameter, valueParameter, type);
		}

		static ::System::Void ValidateGotoType(::System::Type* expectedType, ::System::Linq::Expressions::Expression*& value, ::System::String* paramName)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Linq::Expressions::Expression*&, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEGOTOTYPE_OFFSET))(expectedType, value, paramName);
		}

		static ::System::Linq::Expressions::IndexExpression* MakeIndex(::System::Linq::Expressions::Expression* instance, ::System::Reflection::PropertyInfo* indexer, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Linq::Expressions::IndexExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::PropertyInfo*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEINDEX_OFFSET))(instance, indexer, arguments);
		}

		static ::System::Linq::Expressions::IndexExpression* ArrayAccess(::System::Linq::Expressions::Expression* array, ::Il2CppArray<::System::Linq::Expressions::Expression*>* indexes)
		{
			return ((::System::Linq::Expressions::IndexExpression*(*)(::System::Linq::Expressions::Expression*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ARRAYACCESS_OFFSET))(array, indexes);
		}

		static ::System::Linq::Expressions::IndexExpression* ArrayAccess_1(::System::Linq::Expressions::Expression* array, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* indexes)
		{
			return ((::System::Linq::Expressions::IndexExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ARRAYACCESS_1_OFFSET))(array, indexes);
		}

		static ::System::Linq::Expressions::IndexExpression* Property(::System::Linq::Expressions::Expression* instance, ::System::Reflection::PropertyInfo* indexer, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Linq::Expressions::IndexExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::PropertyInfo*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PROPERTY_OFFSET))(instance, indexer, arguments);
		}

		static ::System::Linq::Expressions::IndexExpression* MakeIndexProperty(::System::Linq::Expressions::Expression* instance, ::System::Reflection::PropertyInfo* indexer, ::System::String* paramName, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* argList)
		{
			return ((::System::Linq::Expressions::IndexExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::PropertyInfo*, ::System::String*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEINDEXPROPERTY_OFFSET))(instance, indexer, paramName, argList);
		}

		static ::System::Void ValidateIndexedProperty(::System::Linq::Expressions::Expression* instance, ::System::Reflection::PropertyInfo* indexer, ::System::String* paramName, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*& argList)
		{
			return ((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::PropertyInfo*, ::System::String*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*&))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEINDEXEDPROPERTY_OFFSET))(instance, indexer, paramName, argList);
		}

		static ::System::Void ValidateAccessor(::System::Linq::Expressions::Expression* instance, ::System::Reflection::MethodInfo* method, ::Il2CppArray<::System::Reflection::ParameterInfo*>* indexes, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*& arguments, ::System::String* paramName)
		{
			return ((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*&, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEACCESSOR_OFFSET))(instance, method, indexes, arguments, paramName);
		}

		static ::System::Void ValidateAccessorArgumentTypes(::System::Reflection::MethodInfo* method, ::Il2CppArray<::System::Reflection::ParameterInfo*>* indexes, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*& arguments, ::System::String* paramName)
		{
			return ((::System::Void(*)(::System::Reflection::MethodInfo*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*&, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEACCESSORARGUMENTTYPES_OFFSET))(method, indexes, arguments, paramName);
		}

		static ::System::Linq::Expressions::InvocationExpression* Invoke(::System::Linq::Expressions::Expression* expression, ::System::Linq::Expressions::Expression* arg0)
		{
			return ((::System::Linq::Expressions::InvocationExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INVOKE_OFFSET))(expression, arg0);
		}

		static ::System::Reflection::MethodInfo* GetInvokeMethod(::System::Linq::Expressions::Expression* expression)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETINVOKEMETHOD_OFFSET))(expression);
		}

		static ::System::Linq::Expressions::LabelExpression* Label(::System::Linq::Expressions::LabelTarget* target, ::System::Linq::Expressions::Expression* defaultValue)
		{
			return ((::System::Linq::Expressions::LabelExpression*(*)(::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LABEL_OFFSET))(target, defaultValue);
		}

		static ::System::Linq::Expressions::LabelTarget* Label_1(::System::Type* type, ::System::String* name)
		{
			return ((::System::Linq::Expressions::LabelTarget*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LABEL_1_OFFSET))(type, name);
		}

		static ::System::Linq::Expressions::LambdaExpression* CreateLambda(::System::Type* delegateType, ::System::Linq::Expressions::Expression* body, ::System::String* name, ::System::Boolean tailCall, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* parameters)
		{
			return ((::System::Linq::Expressions::LambdaExpression*(*)(::System::Type*, ::System::Linq::Expressions::Expression*, ::System::String*, ::System::Boolean, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CREATELAMBDA_OFFSET))(delegateType, body, name, tailCall, parameters);
		}

		static ::System::Linq::Expressions::LambdaExpression* Lambda(::System::Type* delegateType, ::System::Linq::Expressions::Expression* body, ::Il2CppArray<::System::Linq::Expressions::ParameterExpression*>* parameters)
		{
			return ((::System::Linq::Expressions::LambdaExpression*(*)(::System::Type*, ::System::Linq::Expressions::Expression*, ::Il2CppArray<::System::Linq::Expressions::ParameterExpression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LAMBDA_OFFSET))(delegateType, body, parameters);
		}

		static ::System::Linq::Expressions::LambdaExpression* Lambda_1(::System::Type* delegateType, ::System::Linq::Expressions::Expression* body, ::System::String* name, ::System::Boolean tailCall, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>* parameters)
		{
			return ((::System::Linq::Expressions::LambdaExpression*(*)(::System::Type*, ::System::Linq::Expressions::Expression*, ::System::String*, ::System::Boolean, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LAMBDA_1_OFFSET))(delegateType, body, name, tailCall, parameters);
		}

		static ::System::Void ValidateLambdaArgs(::System::Type* delegateType, ::System::Linq::Expressions::Expression*& body, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* parameters, ::System::String* paramName)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Linq::Expressions::Expression*&, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATELAMBDAARGS_OFFSET))(delegateType, body, parameters, paramName);
		}

		static ::System::Linq::Expressions::MemberExpression* Field(::System::Linq::Expressions::Expression* expression, ::System::Reflection::FieldInfo* field)
		{
			return ((::System::Linq::Expressions::MemberExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_FIELD_OFFSET))(expression, field);
		}

		static ::System::Linq::Expressions::MemberExpression* Field_1(::System::Linq::Expressions::Expression* expression, ::System::String* fieldName)
		{
			return ((::System::Linq::Expressions::MemberExpression*(*)(::System::Linq::Expressions::Expression*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_FIELD_1_OFFSET))(expression, fieldName);
		}

		static ::System::Linq::Expressions::MemberExpression* Property_1(::System::Linq::Expressions::Expression* expression, ::System::String* propertyName)
		{
			return ((::System::Linq::Expressions::MemberExpression*(*)(::System::Linq::Expressions::Expression*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PROPERTY_1_OFFSET))(expression, propertyName);
		}

		static ::System::Linq::Expressions::MemberExpression* Property_2(::System::Linq::Expressions::Expression* expression, ::System::Reflection::PropertyInfo* property)
		{
			return ((::System::Linq::Expressions::MemberExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PROPERTY_2_OFFSET))(expression, property);
		}

		static ::System::Linq::Expressions::MemberExpression* Property_3(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* propertyAccessor)
		{
			return ((::System::Linq::Expressions::MemberExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PROPERTY_3_OFFSET))(expression, propertyAccessor);
		}

		static ::System::Reflection::PropertyInfo* GetProperty(::System::Reflection::MethodInfo* mi, ::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::System::Reflection::MethodInfo*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETPROPERTY_OFFSET))(mi, paramName, index);
		}

		static ::System::Boolean CheckMethod(::System::Reflection::MethodInfo* method, ::System::Reflection::MethodInfo* propertyMethod)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CHECKMETHOD_OFFSET))(method, propertyMethod);
		}

		static ::System::Linq::Expressions::MemberExpression* MakeMemberAccess(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MemberInfo* member)
		{
			return ((::System::Linq::Expressions::MemberExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEMEMBERACCESS_OFFSET))(expression, member);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call(::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_OFFSET))(method);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_1(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* arg0)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_1_OFFSET))(method, arg0);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_2(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_2_OFFSET))(method, arg0, arg1);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_3(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_3_OFFSET))(method, arg0, arg1, arg2);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_4(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2, ::System::Linq::Expressions::Expression* arg3)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_4_OFFSET))(method, arg0, arg1, arg2, arg3);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_5(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2, ::System::Linq::Expressions::Expression* arg3, ::System::Linq::Expressions::Expression* arg4)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_5_OFFSET))(method, arg0, arg1, arg2, arg3, arg4);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_6(::System::Reflection::MethodInfo* method, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Reflection::MethodInfo*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_6_OFFSET))(method, arguments);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_7(::System::Linq::Expressions::Expression* instance, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_7_OFFSET))(instance, method);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_8(::System::Linq::Expressions::Expression* instance, ::System::Reflection::MethodInfo* method, ::Il2CppArray<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_8_OFFSET))(instance, method, arguments);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_9(::System::Linq::Expressions::Expression* instance, ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* arg0)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_9_OFFSET))(instance, method, arg0);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_10(::System::Linq::Expressions::Expression* instance, ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_10_OFFSET))(instance, method, arg0, arg1);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_11(::System::Linq::Expressions::Expression* instance, ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_11_OFFSET))(instance, method, arg0, arg1, arg2);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_12(::System::Linq::Expressions::Expression* instance, ::System::String* methodName, ::Il2CppArray<::System::Type*>* typeArguments, ::Il2CppArray<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Linq::Expressions::Expression*, ::System::String*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_12_OFFSET))(instance, methodName, typeArguments, arguments);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_13(::System::Linq::Expressions::Expression* instance, ::System::Reflection::MethodInfo* method, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_13_OFFSET))(instance, method, arguments);
		}

		static ::Il2CppArray<::System::Reflection::ParameterInfo*>* ValidateMethodAndGetParameters(::System::Linq::Expressions::Expression* instance, ::System::Reflection::MethodInfo* method)
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEMETHODANDGETPARAMETERS_OFFSET))(instance, method);
		}

		static ::System::Void ValidateStaticOrInstanceMethod(::System::Linq::Expressions::Expression* instance, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATESTATICORINSTANCEMETHOD_OFFSET))(instance, method);
		}

		static ::System::Void ValidateCallInstanceType(::System::Type* instanceType, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATECALLINSTANCETYPE_OFFSET))(instanceType, method);
		}

		static ::System::Void ValidateArgumentTypes(::System::Reflection::MethodBase* method, ::System::Linq::Expressions::ExpressionType nodeKind, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*& arguments, ::System::String* methodParamName)
		{
			return ((::System::Void(*)(::System::Reflection::MethodBase*, ::System::Linq::Expressions::ExpressionType, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*&, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEARGUMENTTYPES_OFFSET))(method, nodeKind, arguments, methodParamName);
		}

		static ::Il2CppArray<::System::Reflection::ParameterInfo*>* GetParametersForValidation(::System::Reflection::MethodBase* method, ::System::Linq::Expressions::ExpressionType nodeKind)
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::System::Reflection::MethodBase*, ::System::Linq::Expressions::ExpressionType))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETPARAMETERSFORVALIDATION_OFFSET))(method, nodeKind);
		}

		static ::System::Void ValidateArgumentCount(::System::Reflection::MethodBase* method, ::System::Linq::Expressions::ExpressionType nodeKind, ::System::Int32 count, ::Il2CppArray<::System::Reflection::ParameterInfo*>* pis)
		{
			return ((::System::Void(*)(::System::Reflection::MethodBase*, ::System::Linq::Expressions::ExpressionType, ::System::Int32, ::Il2CppArray<::System::Reflection::ParameterInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEARGUMENTCOUNT_OFFSET))(method, nodeKind, count, pis);
		}

		static ::System::Linq::Expressions::Expression* ValidateOneArgument(::System::Reflection::MethodBase* method, ::System::Linq::Expressions::ExpressionType nodeKind, ::System::Linq::Expressions::Expression* arg, ::System::Reflection::ParameterInfo* pi, ::System::String* methodParamName, ::System::String* argumentParamName)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::System::Reflection::MethodBase*, ::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Reflection::ParameterInfo*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEONEARGUMENT_OFFSET))(method, nodeKind, arg, pi, methodParamName, argumentParamName);
		}

		static ::System::Boolean TryQuote(::System::Type* parameterType, ::System::Linq::Expressions::Expression*& argument)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Linq::Expressions::Expression*&))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TRYQUOTE_OFFSET))(parameterType, argument);
		}

		static ::System::Reflection::MethodInfo* FindMethod(::System::Type* type, ::System::String* methodName, ::Il2CppArray<::System::Type*>* typeArgs, ::Il2CppArray<::System::Linq::Expressions::Expression*>* args, ::System::Reflection::BindingFlags flags)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::String*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_FINDMETHOD_OFFSET))(type, methodName, typeArgs, args, flags);
		}

		static ::System::Boolean IsCompatible(::System::Reflection::MethodBase* m, ::Il2CppArray<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodBase*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISCOMPATIBLE_OFFSET))(m, arguments);
		}

		static ::System::Reflection::MethodInfo* ApplyTypeArgs(::System::Reflection::MethodInfo* m, ::Il2CppArray<::System::Type*>* typeArgs)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Reflection::MethodInfo*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_APPLYTYPEARGS_OFFSET))(m, typeArgs);
		}

		static ::System::Linq::Expressions::NewArrayExpression* NewArrayInit(::System::Type* type, ::Il2CppArray<::System::Linq::Expressions::Expression*>* initializers)
		{
			return ((::System::Linq::Expressions::NewArrayExpression*(*)(::System::Type*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWARRAYINIT_OFFSET))(type, initializers);
		}

		static ::System::Linq::Expressions::NewArrayExpression* NewArrayInit_1(::System::Type* type, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* initializers)
		{
			return ((::System::Linq::Expressions::NewArrayExpression*(*)(::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWARRAYINIT_1_OFFSET))(type, initializers);
		}

		static ::System::Linq::Expressions::NewArrayExpression* NewArrayBounds(::System::Type* type, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* bounds)
		{
			return ((::System::Linq::Expressions::NewArrayExpression*(*)(::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWARRAYBOUNDS_OFFSET))(type, bounds);
		}

		static ::System::Linq::Expressions::NewExpression* New(::System::Reflection::ConstructorInfo* constructor, ::Il2CppArray<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Linq::Expressions::NewExpression*(*)(::System::Reflection::ConstructorInfo*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEW_OFFSET))(constructor, arguments);
		}

		static ::System::Linq::Expressions::NewExpression* New_1(::System::Reflection::ConstructorInfo* constructor, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Linq::Expressions::NewExpression*(*)(::System::Reflection::ConstructorInfo*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEW_1_OFFSET))(constructor, arguments);
		}

		static ::System::Linq::Expressions::NewExpression* New_2(::System::Reflection::ConstructorInfo* constructor, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* arguments, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>* members)
		{
			return ((::System::Linq::Expressions::NewExpression*(*)(::System::Reflection::ConstructorInfo*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEW_2_OFFSET))(constructor, arguments, members);
		}

		static ::System::Void ValidateNewArgs(::System::Reflection::ConstructorInfo* constructor, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*& arguments, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Reflection::MemberInfo*>*& members)
		{
			return ((::System::Void(*)(::System::Reflection::ConstructorInfo*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*&, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Reflection::MemberInfo*>*&))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATENEWARGS_OFFSET))(constructor, arguments, members);
		}

		static ::System::Void ValidateAnonymousTypeMember(::System::Reflection::MemberInfo*& member, ::System::Type*& memberType, ::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Void(*)(::System::Reflection::MemberInfo*&, ::System::Type*&, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEANONYMOUSTYPEMEMBER_OFFSET))(member, memberType, paramName, index);
		}

		static ::System::Void ValidateConstructor(::System::Reflection::ConstructorInfo* constructor, ::System::String* paramName)
		{
			return ((::System::Void(*)(::System::Reflection::ConstructorInfo*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATECONSTRUCTOR_OFFSET))(constructor, paramName);
		}

		static ::System::Linq::Expressions::ParameterExpression* Parameter(::System::Type* type)
		{
			return ((::System::Linq::Expressions::ParameterExpression*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PARAMETER_OFFSET))(type);
		}

		static ::System::Linq::Expressions::ParameterExpression* Parameter_1(::System::Type* type, ::System::String* name)
		{
			return ((::System::Linq::Expressions::ParameterExpression*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PARAMETER_1_OFFSET))(type, name);
		}

		static ::System::Linq::Expressions::ParameterExpression* Variable(::System::Type* type, ::System::String* name)
		{
			return ((::System::Linq::Expressions::ParameterExpression*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VARIABLE_OFFSET))(type, name);
		}

		static ::System::Void Validate(::System::Type* type, ::System::Boolean allowByRef)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATE_OFFSET))(type, allowByRef);
		}

		static ::System::Linq::Expressions::TryExpression* TryFinally(::System::Linq::Expressions::Expression* body, ::System::Linq::Expressions::Expression* finally)
		{
			return ((::System::Linq::Expressions::TryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TRYFINALLY_OFFSET))(body, finally);
		}

		static ::System::Linq::Expressions::TryExpression* MakeTry(::System::Type* type, ::System::Linq::Expressions::Expression* body, ::System::Linq::Expressions::Expression* finally, ::System::Linq::Expressions::Expression* fault, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::CatchBlock*>* handlers)
		{
			return ((::System::Linq::Expressions::TryExpression*(*)(::System::Type*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::CatchBlock*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKETRY_OFFSET))(type, body, finally, fault, handlers);
		}

		static ::System::Void ValidateTryAndCatchHaveSameType(::System::Type* type, ::System::Linq::Expressions::Expression* tryBody, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::CatchBlock*>* handlers)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Linq::Expressions::Expression*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::CatchBlock*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATETRYANDCATCHHAVESAMETYPE_OFFSET))(type, tryBody, handlers);
		}

		static ::System::Linq::Expressions::UnaryExpression* MakeUnary(::System::Linq::Expressions::ExpressionType unaryType, ::System::Linq::Expressions::Expression* operand, ::System::Type* type, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Type*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEUNARY_OFFSET))(unaryType, operand, type, method);
		}

		static ::System::Linq::Expressions::UnaryExpression* GetUserDefinedUnaryOperatorOrThrow(::System::Linq::Expressions::ExpressionType unaryType, ::System::String* name, ::System::Linq::Expressions::Expression* operand)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::String*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDUNARYOPERATORORTHROW_OFFSET))(unaryType, name, operand);
		}

		static ::System::Linq::Expressions::UnaryExpression* GetUserDefinedUnaryOperator(::System::Linq::Expressions::ExpressionType unaryType, ::System::String* name, ::System::Linq::Expressions::Expression* operand)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::String*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDUNARYOPERATOR_OFFSET))(unaryType, name, operand);
		}

		static ::System::Linq::Expressions::UnaryExpression* GetMethodBasedUnaryOperator(::System::Linq::Expressions::ExpressionType unaryType, ::System::Linq::Expressions::Expression* operand, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETMETHODBASEDUNARYOPERATOR_OFFSET))(unaryType, operand, method);
		}

		static ::System::Linq::Expressions::UnaryExpression* GetUserDefinedCoercionOrThrow(::System::Linq::Expressions::ExpressionType coercionType, ::System::Linq::Expressions::Expression* expression, ::System::Type* convertToType)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDCOERCIONORTHROW_OFFSET))(coercionType, expression, convertToType);
		}

		static ::System::Linq::Expressions::UnaryExpression* GetUserDefinedCoercion(::System::Linq::Expressions::ExpressionType coercionType, ::System::Linq::Expressions::Expression* expression, ::System::Type* convertToType)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDCOERCION_OFFSET))(coercionType, expression, convertToType);
		}

		static ::System::Linq::Expressions::UnaryExpression* GetMethodBasedCoercionOperator(::System::Linq::Expressions::ExpressionType unaryType, ::System::Linq::Expressions::Expression* operand, ::System::Type* convertToType, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Type*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETMETHODBASEDCOERCIONOPERATOR_OFFSET))(unaryType, operand, convertToType, method);
		}

		static ::System::Linq::Expressions::UnaryExpression* Negate(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEGATE_OFFSET))(expression, method);
		}

		static ::System::Linq::Expressions::UnaryExpression* UnaryPlus(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_UNARYPLUS_OFFSET))(expression, method);
		}

		static ::System::Linq::Expressions::UnaryExpression* NegateChecked(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEGATECHECKED_OFFSET))(expression, method);
		}

		static ::System::Linq::Expressions::UnaryExpression* Not(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NOT_OFFSET))(expression, method);
		}

		static ::System::Linq::Expressions::UnaryExpression* IsFalse(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISFALSE_OFFSET))(expression, method);
		}

		static ::System::Linq::Expressions::UnaryExpression* IsTrue(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISTRUE_OFFSET))(expression, method);
		}

		static ::System::Linq::Expressions::UnaryExpression* OnesComplement(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ONESCOMPLEMENT_OFFSET))(expression, method);
		}

		static ::System::Linq::Expressions::UnaryExpression* TypeAs(::System::Linq::Expressions::Expression* expression, ::System::Type* type)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TYPEAS_OFFSET))(expression, type);
		}

		static ::System::Linq::Expressions::UnaryExpression* Unbox(::System::Linq::Expressions::Expression* expression, ::System::Type* type)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_UNBOX_OFFSET))(expression, type);
		}

		static ::System::Linq::Expressions::UnaryExpression* Convert(::System::Linq::Expressions::Expression* expression, ::System::Type* type)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONVERT_OFFSET))(expression, type);
		}

		static ::System::Linq::Expressions::UnaryExpression* Convert_1(::System::Linq::Expressions::Expression* expression, ::System::Type* type, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Type*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONVERT_1_OFFSET))(expression, type, method);
		}

		static ::System::Linq::Expressions::UnaryExpression* ConvertChecked(::System::Linq::Expressions::Expression* expression, ::System::Type* type, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Type*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONVERTCHECKED_OFFSET))(expression, type, method);
		}

		static ::System::Linq::Expressions::UnaryExpression* ArrayLength(::System::Linq::Expressions::Expression* array)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ARRAYLENGTH_OFFSET))(array);
		}

		static ::System::Linq::Expressions::UnaryExpression* Quote(::System::Linq::Expressions::Expression* expression)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_QUOTE_OFFSET))(expression);
		}

		static ::System::Linq::Expressions::UnaryExpression* Throw(::System::Linq::Expressions::Expression* value, ::System::Type* type)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_THROW_OFFSET))(value, type);
		}

		static ::System::Linq::Expressions::UnaryExpression* Increment(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INCREMENT_OFFSET))(expression, method);
		}

		static ::System::Linq::Expressions::UnaryExpression* Decrement(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_DECREMENT_OFFSET))(expression, method);
		}

		static ::System::Linq::Expressions::UnaryExpression* PreIncrementAssign(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PREINCREMENTASSIGN_OFFSET))(expression, method);
		}

		static ::System::Linq::Expressions::UnaryExpression* PreDecrementAssign(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PREDECREMENTASSIGN_OFFSET))(expression, method);
		}

		static ::System::Linq::Expressions::UnaryExpression* PostIncrementAssign(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_POSTINCREMENTASSIGN_OFFSET))(expression, method);
		}

		static ::System::Linq::Expressions::UnaryExpression* PostDecrementAssign(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_POSTDECREMENTASSIGN_OFFSET))(expression, method);
		}

		static ::System::Linq::Expressions::UnaryExpression* MakeOpAssignUnary(::System::Linq::Expressions::ExpressionType kind, ::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEOPASSIGNUNARY_OFFSET))(kind, expression, method);
		}
	};
}
