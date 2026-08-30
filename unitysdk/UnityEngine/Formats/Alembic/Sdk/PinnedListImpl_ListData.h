#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_PINNEDLISTIMPL_LISTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE434F0)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int PinnedListImpl_ListData_TypeDefinitionIndex = 44706;

	class PinnedListImpl_ListData : public ::System::Object
	{
	public:
		::System::Object* items; // 0x10
		::System::Int32 size; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_PINNEDLISTIMPL_LISTDATA__CTOR_OFFSET))(this);
		}
	};
}
