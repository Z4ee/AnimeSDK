#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Globalization { class CompareInfo; }

#define SYSTEM_INVARIANTCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1AB3D550)
#define SYSTEM_INVARIANTCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB3D670)
#define SYSTEM_INVARIANTCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB3D4B0)

namespace System
{
	inline static constexpr unsigned int InvariantComparer_TypeDefinitionIndex = 2459;

	class InvariantComparer : public ::System::Object
	{
	public:
		static ::System::InvariantComparer** StaticGet_Default()
		{
			return (::System::InvariantComparer**)Il2CppClass::FromTypeDefinitionIndex(InvariantComparer_TypeDefinitionIndex)->GetStaticField(0x33DE0);
		}
		::System::Globalization::CompareInfo* m_compareInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INVARIANTCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_INVARIANTCOMPARER__CCTOR_OFFSET))();
		}

		::System::Int32 Compare(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_INVARIANTCOMPARER_COMPARE_OFFSET))(this, a1, a2);
		}
	};
}
