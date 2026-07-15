#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_EVENTS_ARGUMENTCACHE_GET_BOOLARGUMENT_OFFSET UNITYSDK_OFFSET(0x1C175850)
#define UNITYENGINE_EVENTS_ARGUMENTCACHE_GET_FLOATARGUMENT_OFFSET UNITYSDK_OFFSET(0x1C175830)
#define UNITYENGINE_EVENTS_ARGUMENTCACHE_GET_INTARGUMENT_OFFSET UNITYSDK_OFFSET(0x1C175820)
#define UNITYENGINE_EVENTS_ARGUMENTCACHE_GET_STRINGARGUMENT_OFFSET UNITYSDK_OFFSET(0x1C175840)
#define UNITYENGINE_EVENTS_ARGUMENTCACHE_GET_UNITYOBJECTARGUMENTASSEMBLYTYPENAME_OFFSET UNITYSDK_OFFSET(0x1C175810)
#define UNITYENGINE_EVENTS_ARGUMENTCACHE_GET_UNITYOBJECTARGUMENT_OFFSET UNITYSDK_OFFSET(0x1C175800)
#define UNITYENGINE_EVENTS_ARGUMENTCACHE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C1759E0)
#define UNITYENGINE_EVENTS_ARGUMENTCACHE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C1759D0)
#define UNITYENGINE_EVENTS_ARGUMENTCACHE_TIDYASSEMBLYTYPENAME_OFFSET UNITYSDK_OFFSET(0x1C175860)
#define UNITYENGINE_EVENTS_ARGUMENTCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1759F0)

namespace UnityEngine::Events
{
	inline static constexpr unsigned int ArgumentCache_TypeDefinitionIndex = 4464;

	class ArgumentCache : public ::System::Object
	{
	public:
		::UnityEngine::Object* m_ObjectArgument; // 0x10
		::System::String* m_ObjectArgumentAssemblyTypeName; // 0x18
		::System::Int32 m_IntArgument; // 0x20
		::System::Single m_FloatArgument; // 0x24
		::System::String* m_StringArgument; // 0x28
		::System::Boolean m_BoolArgument; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_ARGUMENTCACHE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Object* get_unityObjectArgument()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_ARGUMENTCACHE_GET_UNITYOBJECTARGUMENT_OFFSET))(this);
		}

		::System::String* get_unityObjectArgumentAssemblyTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_ARGUMENTCACHE_GET_UNITYOBJECTARGUMENTASSEMBLYTYPENAME_OFFSET))(this);
		}

		::System::Int32 get_intArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_ARGUMENTCACHE_GET_INTARGUMENT_OFFSET))(this);
		}

		::System::Single get_floatArgument()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_ARGUMENTCACHE_GET_FLOATARGUMENT_OFFSET))(this);
		}

		::System::String* get_stringArgument()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_ARGUMENTCACHE_GET_STRINGARGUMENT_OFFSET))(this);
		}

		::System::Boolean get_boolArgument()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_ARGUMENTCACHE_GET_BOOLARGUMENT_OFFSET))(this);
		}

		::System::Void TidyAssemblyTypeName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_ARGUMENTCACHE_TIDYASSEMBLYTYPENAME_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_ARGUMENTCACHE_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_ARGUMENTCACHE_ONAFTERDESERIALIZE_OFFSET))(this);
		}
	};
}
