#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Linq::Expressions { class LambdaExpression; }
namespace System::Linq::Expressions { template <typename T> class Expression_1; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class PropertyInfo; }

#define UTF8JSON_INTERNAL_EMIT_EXPRESSIONUTILITY_GETMETHODINFOCORE_OFFSET UNITYSDK_OFFSET(0x1E7ED1B0)
#define UTF8JSON_INTERNAL_EMIT_EXPRESSIONUTILITY_GETMETHODINFO_OFFSET UNITYSDK_OFFSET(0x1E7ED250)

namespace Utf8Json::Internal::Emit
{
	inline static constexpr unsigned int ExpressionUtility_TypeDefinitionIndex = 91248;

	class ExpressionUtility : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo* GetMethodInfoCore(::System::Linq::Expressions::LambdaExpression* expression)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_EXPRESSIONUTILITY_GETMETHODINFOCORE_OFFSET))(expression);
		}

		static ::System::Reflection::MethodInfo* GetMethodInfo(::System::Linq::Expressions::Expression_1<::System::Action*>* expression)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Linq::Expressions::Expression_1<::System::Action*>*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_EXPRESSIONUTILITY_GETMETHODINFO_OFFSET))(expression);
		}
	};
}
