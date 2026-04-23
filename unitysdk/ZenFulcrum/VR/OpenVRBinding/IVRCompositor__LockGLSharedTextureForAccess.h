#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__LOCKGLSHAREDTEXTUREFORACCESS_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6EF340)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__LOCKGLSHAREDTEXTUREFORACCESS_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6EF390)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__LOCKGLSHAREDTEXTUREFORACCESS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6EF050)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__LOCKGLSHAREDTEXTUREFORACCESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6EF030)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__LockGLSharedTextureForAccess_TypeDefinitionIndex = 35814;

	class IVRCompositor__LockGLSharedTextureForAccess : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__LOCKGLSHAREDTEXTUREFORACCESS__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr glSharedTextureHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__LOCKGLSHAREDTEXTUREFORACCESS_INVOKE_OFFSET))(this, glSharedTextureHandle);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr glSharedTextureHandle, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__LOCKGLSHAREDTEXTUREFORACCESS_BEGININVOKE_OFFSET))(this, glSharedTextureHandle, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__LOCKGLSHAREDTEXTUREFORACCESS_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
