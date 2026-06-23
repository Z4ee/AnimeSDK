#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class IArgumentProvider; }
namespace System::Linq::Expressions { class IParameterProvider; }
namespace System::Linq::Expressions { class ParameterExpression; }
namespace System::Reflection { class MethodBase; }
namespace System::Reflection { class ParameterInfo; }

#define SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_GETPARAMETERSFORVALIDATION_OFFSET UNITYSDK_OFFSET(0x1E38C560)
#define SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_REQUIRESCANREAD_1_OFFSET UNITYSDK_OFFSET(0x1E38C930)
#define SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_REQUIRESCANREAD_OFFSET UNITYSDK_OFFSET(0x1E38CBD0)
#define SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_RETURNREADONLY_1_OFFSET UNITYSDK_OFFSET(0x1E38BF20)
#define SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_RETURNREADONLY_OFFSET UNITYSDK_OFFSET(0x1E38BE10)
#define SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_TRYQUOTE_OFFSET UNITYSDK_OFFSET(0x1E38CAE0)
#define SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_VALIDATEARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1E38C5E0)
#define SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_VALIDATEARGUMENTTYPES_OFFSET UNITYSDK_OFFSET(0x1E38C030)
#define SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_VALIDATEONEARGUMENT_OFFSET UNITYSDK_OFFSET(0x1E38C6A0)

namespace System::Dynamic::Utils
{
	inline static constexpr unsigned int ExpressionUtils_TypeDefinitionIndex = 5015;

	class ExpressionUtils : public ::System::Object
	{
	public:
		static ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* ReturnReadOnly(::System::Linq::Expressions::IParameterProvider* provider, ::System::Object*& collection)
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*(*)(::System::Linq::Expressions::IParameterProvider*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_RETURNREADONLY_OFFSET))(provider, collection);
		}

		static ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* ReturnReadOnly_1(::System::Linq::Expressions::IArgumentProvider* provider, ::System::Object*& collection)
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::System::Linq::Expressions::IArgumentProvider*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_RETURNREADONLY_1_OFFSET))(provider, collection);
		}

		static ::System::Void ValidateArgumentTypes(::System::Reflection::MethodBase* method, ::System::Linq::Expressions::ExpressionType nodeKind, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*& arguments, ::System::String* methodParamName)
		{
			return ((::System::Void(*)(::System::Reflection::MethodBase*, ::System::Linq::Expressions::ExpressionType, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*&, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_VALIDATEARGUMENTTYPES_OFFSET))(method, nodeKind, arguments, methodParamName);
		}

		static ::System::Void ValidateArgumentCount(::System::Reflection::MethodBase* method, ::System::Linq::Expressions::ExpressionType nodeKind, ::System::Int32 count, ::Il2CppArray<::System::Reflection::ParameterInfo*>* pis)
		{
			return ((::System::Void(*)(::System::Reflection::MethodBase*, ::System::Linq::Expressions::ExpressionType, ::System::Int32, ::Il2CppArray<::System::Reflection::ParameterInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_VALIDATEARGUMENTCOUNT_OFFSET))(method, nodeKind, count, pis);
		}

		static ::System::Linq::Expressions::Expression* ValidateOneArgument(::System::Reflection::MethodBase* method, ::System::Linq::Expressions::ExpressionType nodeKind, ::System::Linq::Expressions::Expression* arguments, ::System::Reflection::ParameterInfo* pi, ::System::String* methodParamName, ::System::String* argumentParamName, ::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::System::Reflection::MethodBase*, ::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Reflection::ParameterInfo*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_VALIDATEONEARGUMENT_OFFSET))(method, nodeKind, arguments, pi, methodParamName, argumentParamName, index);
		}

		static ::System::Void RequiresCanRead(::System::Linq::Expressions::Expression* expression, ::System::String* paramName)
		{
			return ((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_REQUIRESCANREAD_OFFSET))(expression, paramName);
		}

		static ::System::Void RequiresCanRead_1(::System::Linq::Expressions::Expression* expression, ::System::String* paramName, ::System::Int32 idx)
		{
			return ((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_REQUIRESCANREAD_1_OFFSET))(expression, paramName, idx);
		}

		static ::System::Boolean TryQuote(::System::Type* parameterType, ::System::Linq::Expressions::Expression*& argument)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Linq::Expressions::Expression*&))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_TRYQUOTE_OFFSET))(parameterType, argument);
		}

		static ::Il2CppArray<::System::Reflection::ParameterInfo*>* GetParametersForValidation(::System::Reflection::MethodBase* method, ::System::Linq::Expressions::ExpressionType nodeKind)
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::System::Reflection::MethodBase*, ::System::Linq::Expressions::ExpressionType))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_GETPARAMETERSFORVALIDATION_OFFSET))(method, nodeKind);
		}
	};
}
