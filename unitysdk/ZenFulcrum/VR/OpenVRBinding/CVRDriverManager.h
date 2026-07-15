#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/IVRDriverManager.h"

namespace System::Text { class StringBuilder; }

#define ZENFULCRUM_VR_OPENVRBINDING_CVRDRIVERMANAGER_GETDRIVERCOUNT_OFFSET UNITYSDK_OFFSET(0x1BBF0940)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRDRIVERMANAGER_GETDRIVERNAME_OFFSET UNITYSDK_OFFSET(0x1BBF0970)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRDRIVERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBF0870)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVRDriverManager_TypeDefinitionIndex = 37056;

	class CVRDriverManager : public ::System::Object
	{
	public:
		::ZenFulcrum::VR::OpenVRBinding::IVRDriverManager FnTable; // 0x10

		::System::Void _ctor(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRDRIVERMANAGER__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 GetDriverCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRDRIVERMANAGER_GETDRIVERCOUNT_OFFSET))(this);
		}

		::System::UInt32 GetDriverName(::System::UInt32 a1, ::System::Text::StringBuilder* a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::Text::StringBuilder*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRDRIVERMANAGER_GETDRIVERNAME_OFFSET))(this, a1, a2, a3);
		}
	};
}
