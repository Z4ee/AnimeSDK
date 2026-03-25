#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Hashtable.h"

namespace System { class Object; }
namespace System::Collections { class IEqualityComparer; }

#define SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1869D5B0)
#define SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_REMOVE_OFFSET UNITYSDK_OFFSET(0x1869D700)
#define SYSTEM_COMPONENTMODEL_WEAKHASHTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1869D710)
#define SYSTEM_COMPONENTMODEL_WEAKHASHTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1869BFB0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int WeakHashtable_TypeDefinitionIndex = 2641;

	class WeakHashtable : public ::System::Collections::Hashtable
	{
	public:
		static ::System::Collections::IEqualityComparer** StaticGet__comparer()
		{
			return (::System::Collections::IEqualityComparer**)Il2CppClass::FromTypeDefinitionIndex(WeakHashtable_TypeDefinitionIndex)->GetStaticField(0x113B0);
		}

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
	};
}
