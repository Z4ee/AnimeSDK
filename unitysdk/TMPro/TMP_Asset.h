#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine { class Material; }

#define TMPRO_TMP_ASSET_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x17196050)
#define TMPRO_TMP_ASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x171960A0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Asset_TypeDefinitionIndex = 41737;

	class TMP_Asset : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Int32 m_InstanceID; // 0x18
		::System::Int32 hashCode; // 0x1C
		::UnityEngine::Material* material; // 0x20
		::System::Int32 materialHashCode; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_ASSET__CTOR_OFFSET))(this);
		}

		::System::Int32 get_instanceID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_ASSET_GET_INSTANCEID_OFFSET))(this);
		}
	};
}
