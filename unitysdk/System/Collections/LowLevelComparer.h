#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_COLLECTIONS_LOWLEVELCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x177F9990)
#define SYSTEM_COLLECTIONS_LOWLEVELCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x177F9B70)
#define SYSTEM_COLLECTIONS_LOWLEVELCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x177F9980)

namespace System::Collections
{
	inline static constexpr unsigned int LowLevelComparer_TypeDefinitionIndex = 1447;

	class LowLevelComparer : public ::System::Object
	{
	public:
		static ::System::Collections::LowLevelComparer** StaticGet_Default()
		{
			return (::System::Collections::LowLevelComparer**)Il2CppClass::FromTypeDefinitionIndex(LowLevelComparer_TypeDefinitionIndex)->GetStaticField(0x1670);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LOWLEVELCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LOWLEVELCOMPARER__CCTOR_OFFSET))();
		}

		::System::Int32 Compare(::System::Object* a, ::System::Object* b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LOWLEVELCOMPARER_COMPARE_OFFSET))(this, a, b);
		}
	};
}
