#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_ANIMATORSTATEINFO_GET_FULLPATHHASH_OFFSET UNITYSDK_OFFSET(0xD250)
#define UNITYENGINE_ANIMATORSTATEINFO_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0xA8E740)
#define UNITYENGINE_ANIMATORSTATEINFO_GET_LOOP_OFFSET UNITYSDK_OFFSET(0x210D060)
#define UNITYENGINE_ANIMATORSTATEINFO_GET_NAMEHASH_OFFSET UNITYSDK_OFFSET(0x1DA90)
#define UNITYENGINE_ANIMATORSTATEINFO_GET_NORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0xCCC0)
#define UNITYENGINE_ANIMATORSTATEINFO_GET_SHORTNAMEHASH_OFFSET UNITYSDK_OFFSET(0x59D0)
#define UNITYENGINE_ANIMATORSTATEINFO_GET_SPEEDMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1639980)
#define UNITYENGINE_ANIMATORSTATEINFO_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x15D3500)
#define UNITYENGINE_ANIMATORSTATEINFO_GET_TAGHASH_OFFSET UNITYSDK_OFFSET(0x1E140)
#define UNITYENGINE_ANIMATORSTATEINFO_ISNAME_OFFSET UNITYSDK_OFFSET(0x210E2B0)
#define UNITYENGINE_ANIMATORSTATEINFO_ISTAG_OFFSET UNITYSDK_OFFSET(0x210E300)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimatorStateInfo_TypeDefinitionIndex = 5029;

	struct alignas(4) AnimatorStateInfo
	{
		::System::Int32 m_Name; // 0x10
		::System::Int32 m_Path; // 0x14
		::System::Int32 m_FullPath; // 0x18
		::System::Single m_NormalizedTime; // 0x1C
		::System::Single m_Length; // 0x20
		::System::Single m_Speed; // 0x24
		::System::Single m_SpeedMultiplier; // 0x28
		::System::Int32 m_Tag; // 0x2C
		::System::Int32 m_Loop; // 0x30

		::System::Boolean IsName(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORSTATEINFO_ISNAME_OFFSET))(this, name);
		}

		::System::Int32 get_fullPathHash()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORSTATEINFO_GET_FULLPATHHASH_OFFSET))(this);
		}

		::System::Int32 get_nameHash()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORSTATEINFO_GET_NAMEHASH_OFFSET))(this);
		}

		::System::Int32 get_shortNameHash()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORSTATEINFO_GET_SHORTNAMEHASH_OFFSET))(this);
		}

		::System::Single get_normalizedTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORSTATEINFO_GET_NORMALIZEDTIME_OFFSET))(this);
		}

		::System::Single get_length()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORSTATEINFO_GET_LENGTH_OFFSET))(this);
		}

		::System::Single get_speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORSTATEINFO_GET_SPEED_OFFSET))(this);
		}

		::System::Single get_speedMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORSTATEINFO_GET_SPEEDMULTIPLIER_OFFSET))(this);
		}

		::System::Int32 get_tagHash()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORSTATEINFO_GET_TAGHASH_OFFSET))(this);
		}

		::System::Boolean IsTag(::System::String* tag)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORSTATEINFO_ISTAG_OFFSET))(this, tag);
		}

		::System::Boolean get_loop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORSTATEINFO_GET_LOOP_OFFSET))(this);
		}
	};
}
