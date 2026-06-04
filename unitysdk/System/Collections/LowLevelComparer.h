#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_COLLECTIONS_LOWLEVELCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x185B4250)
#define SYSTEM_COLLECTIONS_LOWLEVELCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x185B4450)
#define SYSTEM_COLLECTIONS_LOWLEVELCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x185B4240)

namespace System::Collections
{
	inline static constexpr unsigned int LowLevelComparer_TypeDefinitionIndex = 1446;

	class LowLevelComparer : public ::System::Object
	{
	public:
		static ::System::Collections::LowLevelComparer** StaticGet_Default()
		{
			return (::System::Collections::LowLevelComparer**)Il2CppClass::FromTypeDefinitionIndex(LowLevelComparer_TypeDefinitionIndex)->GetStaticField(0x37B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LOWLEVELCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LOWLEVELCOMPARER__CCTOR_OFFSET))();
		}

		::System::Int32 Compare(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LOWLEVELCOMPARER_COMPARE_OFFSET))(this, a1, a2);
		}
	};
}
