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
namespace System::Reflection { class MethodBase; }
namespace System::Reflection { class ParameterInfo; }

#define SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_GETPARAMETERSFORVALIDATION_OFFSET UNITYSDK_OFFSET(0x19A2C1C0)
#define SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_REQUIRESCANREAD_1_OFFSET UNITYSDK_OFFSET(0x19A2C8F0)
#define SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_REQUIRESCANREAD_OFFSET UNITYSDK_OFFSET(0x19A2D570)
#define SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_TRYQUOTE_OFFSET UNITYSDK_OFFSET(0x19A2CFB0)
#define SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_VALIDATEARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x19A2C240)
#define SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_VALIDATEARGUMENTTYPES_OFFSET UNITYSDK_OFFSET(0x19A2BCA0)
#define SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_VALIDATEONEARGUMENT_OFFSET UNITYSDK_OFFSET(0x19A2C300)

namespace System::Dynamic::Utils
{
	inline static constexpr unsigned int ExpressionUtils_TypeDefinitionIndex = 3687;

	class ExpressionUtils : public ::System::Object
	{
	public:
		static ::System::Void ValidateArgumentTypes(::System::Reflection::MethodBase* a1, ::System::Linq::Expressions::ExpressionType a2, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*& a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::System::Reflection::MethodBase*, ::System::Linq::Expressions::ExpressionType, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*&, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_VALIDATEARGUMENTTYPES_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ValidateArgumentCount(::System::Reflection::MethodBase* a1, ::System::Linq::Expressions::ExpressionType a2, ::System::Int32 a3, ::Il2CppArray<::System::Reflection::ParameterInfo*>* a4)
		{
			return ((::System::Void(*)(::System::Reflection::MethodBase*, ::System::Linq::Expressions::ExpressionType, ::System::Int32, ::Il2CppArray<::System::Reflection::ParameterInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_VALIDATEARGUMENTCOUNT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::Expression* ValidateOneArgument(::System::Reflection::MethodBase* a1, ::System::Linq::Expressions::ExpressionType a2, ::System::Linq::Expressions::Expression* a3, ::System::Reflection::ParameterInfo* a4, ::System::String* a5, ::System::String* a6, ::System::Int32 a7)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::System::Reflection::MethodBase*, ::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Reflection::ParameterInfo*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_VALIDATEONEARGUMENT_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void RequiresCanRead(::System::Linq::Expressions::Expression* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_REQUIRESCANREAD_OFFSET))(a1, a2);
		}

		static ::System::Void RequiresCanRead_1(::System::Linq::Expressions::Expression* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_REQUIRESCANREAD_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryQuote(::System::Type* a1, ::System::Linq::Expressions::Expression*& a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Linq::Expressions::Expression*&))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_TRYQUOTE_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Reflection::ParameterInfo*>* GetParametersForValidation(::System::Reflection::MethodBase* a1, ::System::Linq::Expressions::ExpressionType a2)
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::System::Reflection::MethodBase*, ::System::Linq::Expressions::ExpressionType))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_GETPARAMETERSFORVALIDATION_OFFSET))(a1, a2);
		}
	};
}
