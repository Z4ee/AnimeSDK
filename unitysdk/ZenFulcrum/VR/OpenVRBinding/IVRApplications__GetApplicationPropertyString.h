#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRApplicationError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRApplicationProperty.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROPERTYSTRING_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6E5840)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROPERTYSTRING_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6E5910)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROPERTYSTRING_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6D4EA0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROPERTYSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6E5820)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications__GetApplicationPropertyString_TypeDefinitionIndex = 35729;

	class IVRApplications__GetApplicationPropertyString : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROPERTYSTRING__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt32 Invoke(::System::String* pchAppKey, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationProperty eProperty, ::System::Text::StringBuilder* pchPropertyValueBuffer, ::System::UInt32 unPropertyValueBufferLen, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError& peError)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationProperty, ::System::Text::StringBuilder*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROPERTYSTRING_INVOKE_OFFSET))(this, pchAppKey, eProperty, pchPropertyValueBuffer, unPropertyValueBufferLen, peError);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchAppKey, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationProperty eProperty, ::System::Text::StringBuilder* pchPropertyValueBuffer, ::System::UInt32 unPropertyValueBufferLen, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError& peError, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationProperty, ::System::Text::StringBuilder*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROPERTYSTRING_BEGININVOKE_OFFSET))(this, pchAppKey, eProperty, pchPropertyValueBuffer, unPropertyValueBufferLen, peError, callback, object);
		}

		::System::UInt32 EndInvoke(::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError& peError, ::System::IAsyncResult* result)
		{
			return ((::System::UInt32(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONPROPERTYSTRING_ENDINVOKE_OFFSET))(this, peError, result);
		}
	};
}
