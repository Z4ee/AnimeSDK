#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_RENDERING_SCALEFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x188ECAA0)
#define UNITYENGINE_RENDERING_SCALEFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x188ECAF0)
#define UNITYENGINE_RENDERING_SCALEFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x188E9330)
#define UNITYENGINE_RENDERING_SCALEFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x188ECA80)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ScaleFunc_TypeDefinitionIndex = 27869;

	class ScaleFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCALEFUNC__CTOR_OFFSET))(this, object, method);
		}

		::UnityEngine::Vector2Int Invoke(::UnityEngine::Vector2Int size)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCALEFUNC_INVOKE_OFFSET))(this, size);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector2Int size, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCALEFUNC_BEGININVOKE_OFFSET))(this, size, callback, object);
		}

		::UnityEngine::Vector2Int EndInvoke(::System::IAsyncResult* result)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCALEFUNC_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
