#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__RELEASESHAREDGLTEXTURE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6EFD80)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__RELEASESHAREDGLTEXTURE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6EFDF0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__RELEASESHAREDGLTEXTURE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6EFA30)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__RELEASESHAREDGLTEXTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6EFA10)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__ReleaseSharedGLTexture_TypeDefinitionIndex = 35813;

	class IVRCompositor__ReleaseSharedGLTexture : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__RELEASESHAREDGLTEXTURE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::UInt32 glTextureId, ::System::IntPtr glSharedTextureHandle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__RELEASESHAREDGLTEXTURE_INVOKE_OFFSET))(this, glTextureId, glSharedTextureHandle);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 glTextureId, ::System::IntPtr glSharedTextureHandle, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__RELEASESHAREDGLTEXTURE_BEGININVOKE_OFFSET))(this, glTextureId, glSharedTextureHandle, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__RELEASESHAREDGLTEXTURE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
