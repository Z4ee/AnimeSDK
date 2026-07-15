#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define SYSTEM_DYNAMIC_UTILS_CONTRACTUTILS_GETPARAMNAME_OFFSET UNITYSDK_OFFSET(0x17E1C810)
#define SYSTEM_DYNAMIC_UTILS_CONTRACTUTILS_GET_UNREACHABLE_OFFSET UNITYSDK_OFFSET(0x17E1C5F0)
#define SYSTEM_DYNAMIC_UTILS_CONTRACTUTILS_REQUIRESNOTNULL_1_OFFSET UNITYSDK_OFFSET(0x17E1C790)
#define SYSTEM_DYNAMIC_UTILS_CONTRACTUTILS_REQUIRESNOTNULL_OFFSET UNITYSDK_OFFSET(0x17E195D0)
#define SYSTEM_DYNAMIC_UTILS_CONTRACTUTILS_REQUIRES_OFFSET UNITYSDK_OFFSET(0x17E1C690)

namespace System::Dynamic::Utils
{
	inline static constexpr unsigned int ContractUtils_TypeDefinitionIndex = 3677;

	class ContractUtils : public ::System::Object
	{
	public:
		static ::System::Exception* get_Unreachable()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_CONTRACTUTILS_GET_UNREACHABLE_OFFSET))();
		}

		static ::System::Void Requires(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_CONTRACTUTILS_REQUIRES_OFFSET))(a1, a2);
		}

		static ::System::Void RequiresNotNull(::System::Object* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_CONTRACTUTILS_REQUIRESNOTNULL_OFFSET))(a1, a2);
		}

		static ::System::Void RequiresNotNull_1(::System::Object* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_CONTRACTUTILS_REQUIRESNOTNULL_1_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GetParamName(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_CONTRACTUTILS_GETPARAMNAME_OFFSET))(a1, a2);
		}
	};
}
