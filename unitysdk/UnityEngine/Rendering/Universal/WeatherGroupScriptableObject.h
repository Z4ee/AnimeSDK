#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigScriptableObject; }
namespace UnityEngine::Rendering::Universal { class WeatherGroupScriptableObject_WeatherConfigKeyPath; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERGROUPSCRIPTABLEOBJECT_GETWEATHERBYKEYWITHDEFAULTSET_OFFSET UNITYSDK_OFFSET(0x1C154940)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERGROUPSCRIPTABLEOBJECT_GETWEATHERBYKEYWITHOUTDEFAULTSET_OFFSET UNITYSDK_OFFSET(0x1C153E70)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERGROUPSCRIPTABLEOBJECT_GETWEATHERBYKEY_OFFSET UNITYSDK_OFFSET(0x1C154060)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERGROUPSCRIPTABLEOBJECT_ISKEYEXISTS_OFFSET UNITYSDK_OFFSET(0x1C153EE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERGROUPSCRIPTABLEOBJECT_ONCLEARCACHE_OFFSET UNITYSDK_OFFSET(0x1C155020)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERGROUPSCRIPTABLEOBJECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C155070)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERGROUPSCRIPTABLEOBJECT_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1C1549B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERGROUPSCRIPTABLEOBJECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C154C80)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERGROUPSCRIPTABLEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1550C0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WeatherGroupScriptableObject_TypeDefinitionIndex = 26520;

	class WeatherGroupScriptableObject : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::String* DefaultKey; // 0x18
		::System::Boolean gap; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::WeatherGroupScriptableObject_WeatherConfigKeyPath*>* WeatherDataList; // 0x28
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* cachedLoadedWeatherSo; // 0x30
		::System::String* cachedLoadedWeatherSoPath; // 0x38
		::System::String* cachedKey; // 0x40
		::Foundation::AssetRequestHandle cachedRequestHandle; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERGROUPSCRIPTABLEOBJECT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* GetWeatherByKeyWithOutDefaultSet(::System::String* key)
		{
			return ((::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERGROUPSCRIPTABLEOBJECT_GETWEATHERBYKEYWITHOUTDEFAULTSET_OFFSET))(this, key);
		}

		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* GetWeatherByKeyWithDefaultSet(::System::String*& key)
		{
			return ((::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject*(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERGROUPSCRIPTABLEOBJECT_GETWEATHERBYKEYWITHDEFAULTSET_OFFSET))(this, key);
		}

		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* GetWeatherByKey(::System::String* key)
		{
			return ((::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERGROUPSCRIPTABLEOBJECT_GETWEATHERBYKEY_OFFSET))(this, key);
		}

		::System::Boolean IsKeyExists(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERGROUPSCRIPTABLEOBJECT_ISKEYEXISTS_OFFSET))(this, key);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERGROUPSCRIPTABLEOBJECT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERGROUPSCRIPTABLEOBJECT_ONDISPOSE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERGROUPSCRIPTABLEOBJECT_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnClearCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERGROUPSCRIPTABLEOBJECT_ONCLEARCACHE_OFFSET))(this);
		}
	};
}
