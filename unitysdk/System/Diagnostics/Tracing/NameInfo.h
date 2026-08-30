#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Diagnostics/Tracing/ConcurrentSetItem_2.h"
#include "unitysdk/System/Diagnostics/Tracing/EventTags.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_TRACING_NAMEINFO_COMPARE_1_OFFSET UNITYSDK_OFFSET(0x1AB7E590)
#define SYSTEM_DIAGNOSTICS_TRACING_NAMEINFO_COMPARE_2_OFFSET UNITYSDK_OFFSET(0x1AB7E490)
#define SYSTEM_DIAGNOSTICS_TRACING_NAMEINFO_COMPARE_OFFSET UNITYSDK_OFFSET(0x1AB7E460)
#define SYSTEM_DIAGNOSTICS_TRACING_NAMEINFO_RESERVEEVENTIDSBELOW_OFFSET UNITYSDK_OFFSET(0x1AB755B0)
#define SYSTEM_DIAGNOSTICS_TRACING_NAMEINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB7E5B0)
#define SYSTEM_DIAGNOSTICS_TRACING_NAMEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB7E320)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int NameInfo_TypeDefinitionIndex = 1607;

	class NameInfo : public ::System::Diagnostics::Tracing::ConcurrentSetItem_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Diagnostics::Tracing::EventTags>, ::System::Diagnostics::Tracing::NameInfo*>
	{
	public:
		static ::System::Int32* StaticGet_lastIdentity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NameInfo_TypeDefinitionIndex)->GetStaticField(0x4100);
		}
		::Il2CppArray<::System::Byte>* nameMetadata; // 0x10
		::System::String* name; // 0x18
		::System::Diagnostics::Tracing::EventTags tags; // 0x20
		::System::Int32 identity; // 0x24

		::System::Void _ctor(::System::String* a1, ::System::Diagnostics::Tracing::EventTags a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::EventTags, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_NAMEINFO__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_NAMEINFO__CCTOR_OFFSET))();
		}

		static ::System::Void ReserveEventIDsBelow(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_NAMEINFO_RESERVEEVENTIDSBELOW_OFFSET))(a1);
		}

		::System::Int32 Compare(::System::Diagnostics::Tracing::NameInfo* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Diagnostics::Tracing::NameInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_NAMEINFO_COMPARE_OFFSET))(this, a1);
		}

		::System::Int32 Compare_1(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Diagnostics::Tracing::EventTags> a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Diagnostics::Tracing::EventTags>))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_NAMEINFO_COMPARE_1_OFFSET))(this, a1);
		}

		::System::Int32 Compare_2(::System::String* a1, ::System::Diagnostics::Tracing::EventTags a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::EventTags))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_NAMEINFO_COMPARE_2_OFFSET))(this, a1, a2);
		}
	};
}
