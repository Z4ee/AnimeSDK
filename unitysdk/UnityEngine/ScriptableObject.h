#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

namespace System { class Type; }

#define UNITYENGINE_SCRIPTABLEOBJECT_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1B2D5870)
#define UNITYENGINE_SCRIPTABLEOBJECT_CREATESCRIPTABLEOBJECTINSTANCEFROMTYPE_OFFSET UNITYSDK_OFFSET(0x1B2D5880)
#define UNITYENGINE_SCRIPTABLEOBJECT_CREATESCRIPTABLEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B2D5860)
#define UNITYENGINE_SCRIPTABLEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2CEBC0)

namespace UnityEngine
{
	inline static constexpr unsigned int ScriptableObject_TypeDefinitionIndex = 4321;

	class ScriptableObject : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTABLEOBJECT__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::ScriptableObject* CreateInstance(::System::Type* a1)
		{
			return ((::UnityEngine::ScriptableObject*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTABLEOBJECT_CREATEINSTANCE_OFFSET))(a1);
		}

		static ::System::Void CreateScriptableObject(::UnityEngine::ScriptableObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::ScriptableObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTABLEOBJECT_CREATESCRIPTABLEOBJECT_OFFSET))(a1);
		}

		static ::UnityEngine::ScriptableObject* CreateScriptableObjectInstanceFromType(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::ScriptableObject*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTABLEOBJECT_CREATESCRIPTABLEOBJECTINSTANCEFROMTYPE_OFFSET))(a1, a2);
		}
	};
}
