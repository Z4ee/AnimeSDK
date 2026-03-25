#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class WeakReference; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SYSTEM_DIAGNOSTICS_SWITCH__CCTOR_OFFSET UNITYSDK_OFFSET(0x186A6FD0)
#define SYSTEM_DIAGNOSTICS_SWITCH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x186A6940)
#define SYSTEM_DIAGNOSTICS_SWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x186A0430)
#define SYSTEM_DIAGNOSTICS_SWITCH__PRUNECACHEDSWITCHES_OFFSET UNITYSDK_OFFSET(0x186A6AC0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int Switch_TypeDefinitionIndex = 2522;

	class Switch : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::WeakReference*>** StaticGet_switches()
		{
			return (::System::Collections::Generic::List_1<::System::WeakReference*>**)Il2CppClass::FromTypeDefinitionIndex(Switch_TypeDefinitionIndex)->GetStaticField(0x114D0);
		}
		static ::System::Int32* StaticGet_s_LastCollectionCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Switch_TypeDefinitionIndex)->GetStaticField(0x5420);
		}
		::System::String* switchValueString; // 0x10
		::System::String* displayName; // 0x18
		::System::String* description; // 0x20
		::System::String* defaultValue; // 0x28

		::System::Void _ctor(::System::String* displayName, ::System::String* description)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCH__CTOR_OFFSET))(this, displayName, description);
		}

		::System::Void _ctor_1(::System::String* displayName, ::System::String* description, ::System::String* defaultSwitchValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCH__CTOR_1_OFFSET))(this, displayName, description, defaultSwitchValue);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCH__CCTOR_OFFSET))();
		}

		static ::System::Void _pruneCachedSwitches()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCH__PRUNECACHEDSWITCHES_OFFSET))();
		}
	};
}
