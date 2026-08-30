#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/IVRResources.h"

namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_CVRRESOURCES_GETRESOURCEFULLPATH_OFFSET UNITYSDK_OFFSET(0x1D7FA920)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRESOURCES_LOADSHAREDRESOURCE_OFFSET UNITYSDK_OFFSET(0x1D7FA8F0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7FA820)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVRResources_TypeDefinitionIndex = 37914;

	class CVRResources : public ::System::Object
	{
	public:
		::ZenFulcrum::VR::OpenVRBinding::IVRResources FnTable; // 0x10

		::System::Void _ctor(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRESOURCES__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 LoadSharedResource(::System::String* a1, ::System::String* a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRESOURCES_LOADSHAREDRESOURCE_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetResourceFullPath(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::UInt32 a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRESOURCES_GETRESOURCEFULLPATH_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
