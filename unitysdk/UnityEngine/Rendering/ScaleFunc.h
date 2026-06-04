#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_RENDERING_SCALEFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B180D60)
#define UNITYENGINE_RENDERING_SCALEFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B180DB0)
#define UNITYENGINE_RENDERING_SCALEFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B17DA30)
#define UNITYENGINE_RENDERING_SCALEFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B180CF0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ScaleFunc_TypeDefinitionIndex = 33775;

	class ScaleFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCALEFUNC__CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2Int Invoke(::UnityEngine::Vector2Int a1)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCALEFUNC_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector2Int a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCALEFUNC_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector2Int EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCALEFUNC_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
