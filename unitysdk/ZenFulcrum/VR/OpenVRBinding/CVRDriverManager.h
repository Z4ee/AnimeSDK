#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/IVRDriverManager.h"

namespace System::Text { class StringBuilder; }

#define ZENFULCRUM_VR_OPENVRBINDING_CVRDRIVERMANAGER_GETDRIVERCOUNT_OFFSET UNITYSDK_OFFSET(0x18CA5690)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRDRIVERMANAGER_GETDRIVERNAME_OFFSET UNITYSDK_OFFSET(0x18CA56B0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRDRIVERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18CA55B0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVRDriverManager_TypeDefinitionIndex = 30254;

	class CVRDriverManager : public ::System::Object
	{
	public:
		::ZenFulcrum::VR::OpenVRBinding::IVRDriverManager FnTable; // 0x10

		::System::Void _ctor(::System::IntPtr pInterface)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRDRIVERMANAGER__CTOR_OFFSET))(this, pInterface);
		}

		::System::UInt32 GetDriverCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRDRIVERMANAGER_GETDRIVERCOUNT_OFFSET))(this);
		}

		::System::UInt32 GetDriverName(::System::UInt32 nDriver, ::System::Text::StringBuilder* pchValue, ::System::UInt32 unBufferSize)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::Text::StringBuilder*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRDRIVERMANAGER_GETDRIVERNAME_OFFSET))(this, nDriver, pchValue, unBufferSize);
		}
	};
}
