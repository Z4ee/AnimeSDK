#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/IVRResources.h"

namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_CVRRESOURCES_GETRESOURCEFULLPATH_OFFSET UNITYSDK_OFFSET(0x1A6E2F30)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRESOURCES_LOADSHAREDRESOURCE_OFFSET UNITYSDK_OFFSET(0x1A6E2F10)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6E2E30)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVRResources_TypeDefinitionIndex = 35973;

	class CVRResources : public ::System::Object
	{
	public:
		::ZenFulcrum::VR::OpenVRBinding::IVRResources FnTable; // 0x10

		::System::Void _ctor(::System::IntPtr pInterface)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRESOURCES__CTOR_OFFSET))(this, pInterface);
		}

		::System::UInt32 LoadSharedResource(::System::String* pchResourceName, ::System::String* pchBuffer, ::System::UInt32 unBufferLen)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRESOURCES_LOADSHAREDRESOURCE_OFFSET))(this, pchResourceName, pchBuffer, unBufferLen);
		}

		::System::UInt32 GetResourceFullPath(::System::String* pchResourceName, ::System::String* pchResourceTypeDirectory, ::System::String* pchPathBuffer, ::System::UInt32 unBufferLen)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRESOURCES_GETRESOURCEFULLPATH_OFFSET))(this, pchResourceName, pchResourceTypeDirectory, pchPathBuffer, unBufferLen);
		}
	};
}
