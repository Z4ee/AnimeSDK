#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__RELEASESHAREDGLTEXTURE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B519810)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__RELEASESHAREDGLTEXTURE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B519880)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__RELEASESHAREDGLTEXTURE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B519800)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__RELEASESHAREDGLTEXTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B519790)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__ReleaseSharedGLTexture_TypeDefinitionIndex = 36113;

	class IVRCompositor__ReleaseSharedGLTexture : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__RELEASESHAREDGLTEXTURE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::UInt32 a1, ::System::IntPtr a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__RELEASESHAREDGLTEXTURE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::System::IntPtr a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__RELEASESHAREDGLTEXTURE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__RELEASESHAREDGLTEXTURE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
