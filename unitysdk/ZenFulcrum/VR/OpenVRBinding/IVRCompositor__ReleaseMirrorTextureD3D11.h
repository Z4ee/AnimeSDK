#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__RELEASEMIRRORTEXTURED3D11_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CB4460)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__RELEASEMIRRORTEXTURED3D11_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CB44B0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__RELEASEMIRRORTEXTURED3D11_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CB4170)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__RELEASEMIRRORTEXTURED3D11__CTOR_OFFSET UNITYSDK_OFFSET(0x18CB4150)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__ReleaseMirrorTextureD3D11_TypeDefinitionIndex = 30091;

	class IVRCompositor__ReleaseMirrorTextureD3D11 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__RELEASEMIRRORTEXTURED3D11__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr pD3D11ShaderResourceView)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__RELEASEMIRRORTEXTURED3D11_INVOKE_OFFSET))(this, pD3D11ShaderResourceView);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr pD3D11ShaderResourceView, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__RELEASEMIRRORTEXTURED3D11_BEGININVOKE_OFFSET))(this, pD3D11ShaderResourceView, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__RELEASEMIRRORTEXTURED3D11_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
