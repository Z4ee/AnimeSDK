#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class FieldInfo; }

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int EnumFormatter_1___c__DisplayClass4_0_TypeDefinitionIndex = 91326;

	template <typename T>
	class EnumFormatter_1___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Type* type; // 0x0
		::System::Func_2<::System::Reflection::FieldInfo*, ::System::Boolean>* __9__0; // 0x0
	};
}
