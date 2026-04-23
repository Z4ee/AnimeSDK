#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FADETOCOLOR_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6EA130)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FADETOCOLOR_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6EA220)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FADETOCOLOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6E9C90)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FADETOCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6E9C70)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__FadeToColor_TypeDefinitionIndex = 35789;

	class IVRCompositor__FadeToColor : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FADETOCOLOR__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Single fSeconds, ::System::Single fRed, ::System::Single fGreen, ::System::Single fBlue, ::System::Single fAlpha, ::System::Boolean bBackground)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FADETOCOLOR_INVOKE_OFFSET))(this, fSeconds, fRed, fGreen, fBlue, fAlpha, bBackground);
		}

		::System::IAsyncResult* BeginInvoke(::System::Single fSeconds, ::System::Single fRed, ::System::Single fGreen, ::System::Single fBlue, ::System::Single fAlpha, ::System::Boolean bBackground, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FADETOCOLOR_BEGININVOKE_OFFSET))(this, fSeconds, fRed, fGreen, fBlue, fAlpha, bBackground, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FADETOCOLOR_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
