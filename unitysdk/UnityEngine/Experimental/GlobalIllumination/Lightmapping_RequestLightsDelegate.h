#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Experimental/GlobalIllumination/LightDataGI.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Light; }

#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPING_REQUESTLIGHTSDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D72B6A0)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPING_REQUESTLIGHTSDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D72B720)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPING_REQUESTLIGHTSDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D72AFB0)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPING_REQUESTLIGHTSDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D72AF90)

namespace UnityEngine::Experimental::GlobalIllumination
{
	inline static constexpr unsigned int Lightmapping_RequestLightsDelegate_TypeDefinitionIndex = 6320;

	class Lightmapping_RequestLightsDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPING_REQUESTLIGHTSDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Il2CppArray<::UnityEngine::Light*>* requests, ::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI> lightsOutput)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Light*>*, ::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPING_REQUESTLIGHTSDELEGATE_INVOKE_OFFSET))(this, requests, lightsOutput);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::UnityEngine::Light*>* requests, ::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI> lightsOutput, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::UnityEngine::Light*>*, ::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPING_REQUESTLIGHTSDELEGATE_BEGININVOKE_OFFSET))(this, requests, lightsOutput, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPING_REQUESTLIGHTSDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
