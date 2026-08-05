#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Hashtable.h"

namespace System { class Object; }
namespace System::Collections { class IEqualityComparer; }

#define SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D616770)
#define SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_REMOVE_OFFSET UNITYSDK_OFFSET(0x1D6168D0)
#define SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_SCAVENGEKEYS_OFFSET UNITYSDK_OFFSET(0x1D616980)
#define SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_SETWEAK_OFFSET UNITYSDK_OFFSET(0x1D6168E0)
#define SYSTEM_COMPONENTMODEL_WEAKHASHTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6170A0)
#define SYSTEM_COMPONENTMODEL_WEAKHASHTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6166A0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int WeakHashtable_TypeDefinitionIndex = 3025;

	class WeakHashtable : public ::System::Collections::Hashtable
	{
	public:
		static ::System::Collections::IEqualityComparer** StaticGet__comparer()
		{
			return (::System::Collections::IEqualityComparer**)Il2CppClass::FromTypeDefinitionIndex(WeakHashtable_TypeDefinitionIndex)->GetStaticField(0x3570);
		}
		::System::Int64 _lastGlobalMem; // 0x50
		::System::Int32 _lastHashCount; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WEAKHASHTABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WEAKHASHTABLE__CCTOR_OFFSET))();
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_CLEAR_OFFSET))(this);
		}

		::System::Void Remove(::System::Object* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_REMOVE_OFFSET))(this, key);
		}

		::System::Void SetWeak(::System::Object* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_SETWEAK_OFFSET))(this, key, value);
		}

		::System::Void ScavengeKeys()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_SCAVENGEKEYS_OFFSET))(this);
		}
	};
}
