#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/CppStructOpsBase_1_CppStructCapabilities.h"

namespace UnrealTypes
{
	inline static constexpr unsigned int CppStructOpsBase_1_TypeDefinitionIndex = 25225;

	template <typename T>
	class CppStructOpsBase_1 : public ::System::Object
	{
	public:
		::System::Int32 _Size_k__BackingField; // 0x0
		::System::Int32 _Alignment_k__BackingField; // 0x0
		static ::UnrealTypes::CppStructOpsBase_1_CppStructCapabilities<T>* StaticGet_Capabilities()
		{
			return (::UnrealTypes::CppStructOpsBase_1_CppStructCapabilities<T>*)Il2CppClass::FromTypeDefinitionIndex(CppStructOpsBase_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
