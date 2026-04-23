#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

namespace System { class Type; }

#define UNITYENGINE_SCRIPTABLEOBJECT_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1A484E20)
#define UNITYENGINE_SCRIPTABLEOBJECT_CREATESCRIPTABLEOBJECTINSTANCEFROMTYPE_OFFSET UNITYSDK_OFFSET(0x1A484E30)
#define UNITYENGINE_SCRIPTABLEOBJECT_CREATESCRIPTABLEOBJECT_OFFSET UNITYSDK_OFFSET(0x1A484E10)
#define UNITYENGINE_SCRIPTABLEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A47E980)

namespace UnityEngine
{
	inline static constexpr unsigned int ScriptableObject_TypeDefinitionIndex = 4147;

	class ScriptableObject : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTABLEOBJECT__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::ScriptableObject* CreateInstance(::System::Type* type)
		{
			return ((::UnityEngine::ScriptableObject*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTABLEOBJECT_CREATEINSTANCE_OFFSET))(type);
		}

		static ::System::Void CreateScriptableObject(::UnityEngine::ScriptableObject* self)
		{
			return ((::System::Void(*)(::UnityEngine::ScriptableObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTABLEOBJECT_CREATESCRIPTABLEOBJECT_OFFSET))(self);
		}

		static ::UnityEngine::ScriptableObject* CreateScriptableObjectInstanceFromType(::System::Type* type, ::System::Boolean applyDefaultsAndReset)
		{
			return ((::UnityEngine::ScriptableObject*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTABLEOBJECT_CREATESCRIPTABLEOBJECTINSTANCEFROMTYPE_OFFSET))(type, applyDefaultsAndReset);
		}
	};
}
