#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_EVENTS_ARGUMENTCACHE_GET_BOOLARGUMENT_OFFSET UNITYSDK_OFFSET(0x1E7BFC90)
#define UNITYENGINE_EVENTS_ARGUMENTCACHE_GET_FLOATARGUMENT_OFFSET UNITYSDK_OFFSET(0x1E7BFC50)
#define UNITYENGINE_EVENTS_ARGUMENTCACHE_GET_INTARGUMENT_OFFSET UNITYSDK_OFFSET(0x1E7BFC30)
#define UNITYENGINE_EVENTS_ARGUMENTCACHE_GET_STRINGARGUMENT_OFFSET UNITYSDK_OFFSET(0x1E7BFC70)
#define UNITYENGINE_EVENTS_ARGUMENTCACHE_GET_UNITYOBJECTARGUMENTASSEMBLYTYPENAME_OFFSET UNITYSDK_OFFSET(0x1E7BFC20)
#define UNITYENGINE_EVENTS_ARGUMENTCACHE_GET_UNITYOBJECTARGUMENT_OFFSET UNITYSDK_OFFSET(0x1E7BFAA0)
#define UNITYENGINE_EVENTS_ARGUMENTCACHE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E7BFE60)
#define UNITYENGINE_EVENTS_ARGUMENTCACHE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E7BFE50)
#define UNITYENGINE_EVENTS_ARGUMENTCACHE_SET_BOOLARGUMENT_OFFSET UNITYSDK_OFFSET(0x1E7BFCA0)
#define UNITYENGINE_EVENTS_ARGUMENTCACHE_SET_FLOATARGUMENT_OFFSET UNITYSDK_OFFSET(0x1E7BFC60)
#define UNITYENGINE_EVENTS_ARGUMENTCACHE_SET_INTARGUMENT_OFFSET UNITYSDK_OFFSET(0x1E7BFC40)
#define UNITYENGINE_EVENTS_ARGUMENTCACHE_SET_STRINGARGUMENT_OFFSET UNITYSDK_OFFSET(0x1E7BFC80)
#define UNITYENGINE_EVENTS_ARGUMENTCACHE_SET_UNITYOBJECTARGUMENT_OFFSET UNITYSDK_OFFSET(0x1E7BFAB0)
#define UNITYENGINE_EVENTS_ARGUMENTCACHE_TIDYASSEMBLYTYPENAME_OFFSET UNITYSDK_OFFSET(0x1E7BFCB0)
#define UNITYENGINE_EVENTS_ARGUMENTCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7BFE70)

namespace UnityEngine::Events
{
	inline static constexpr unsigned int ArgumentCache_TypeDefinitionIndex = 5485;

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

		::System::Void set_unityObjectArgument(::UnityEngine::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_ARGUMENTCACHE_SET_UNITYOBJECTARGUMENT_OFFSET))(this, value);
		}

		::System::String* get_unityObjectArgumentAssemblyTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_ARGUMENTCACHE_GET_UNITYOBJECTARGUMENTASSEMBLYTYPENAME_OFFSET))(this);
		}

		::System::Int32 get_intArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_ARGUMENTCACHE_GET_INTARGUMENT_OFFSET))(this);
		}

		::System::Void set_intArgument(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_ARGUMENTCACHE_SET_INTARGUMENT_OFFSET))(this, value);
		}

		::System::Single get_floatArgument()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_ARGUMENTCACHE_GET_FLOATARGUMENT_OFFSET))(this);
		}

		::System::Void set_floatArgument(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_ARGUMENTCACHE_SET_FLOATARGUMENT_OFFSET))(this, value);
		}

		::System::String* get_stringArgument()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_ARGUMENTCACHE_GET_STRINGARGUMENT_OFFSET))(this);
		}

		::System::Void set_stringArgument(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_ARGUMENTCACHE_SET_STRINGARGUMENT_OFFSET))(this, value);
		}

		::System::Boolean get_boolArgument()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_ARGUMENTCACHE_GET_BOOLARGUMENT_OFFSET))(this);
		}

		::System::Void set_boolArgument(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_ARGUMENTCACHE_SET_BOOLARGUMENT_OFFSET))(this, value);
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
