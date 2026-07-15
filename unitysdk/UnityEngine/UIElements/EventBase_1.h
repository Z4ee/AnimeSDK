#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/EventBase.h"

namespace UnityEngine::UIElements { template <typename T> class ObjectPool_1; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventBase_1_TypeDefinitionIndex = 6191;

	template <typename T>
	class EventBase_1 : public ::UnityEngine::UIElements::EventBase
	{
	public:
		static ::System::Int64* StaticGet_s_TypeId()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(EventBase_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::UnityEngine::UIElements::ObjectPool_1<T>** StaticGet_s_Pool()
		{
			return (::UnityEngine::UIElements::ObjectPool_1<T>**)Il2CppClass::FromTypeDefinitionIndex(EventBase_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Int32 m_RefCount; // 0x0
	};
}
