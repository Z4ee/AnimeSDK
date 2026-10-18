#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_READONLYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1799E0)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int ReadOnlyAttribute_TypeDefinitionIndex = 45888;

	class ReadOnlyAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_READONLYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
