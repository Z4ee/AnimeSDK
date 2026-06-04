#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_MIHOYO_ENGINEVERSION_GET_P4BRANCH_OFFSET UNITYSDK_OFFSET(0x1B315110)
#define UNITYENGINE_MIHOYO_ENGINEVERSION_GET_P4COMMIT_OFFSET UNITYSDK_OFFSET(0x1B315100)
#define UNITYENGINE_MIHOYO_ENGINEVERSION_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1B315120)

namespace UnityEngine::miHoYo
{
	inline static constexpr unsigned int EngineVersion_TypeDefinitionIndex = 6305;

	class EngineVersion : public ::System::Object
	{
	public:
		static ::System::Int32 get_p4Commit()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_MIHOYO_ENGINEVERSION_GET_P4COMMIT_OFFSET))();
		}

		static ::System::String* get_p4Branch()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_MIHOYO_ENGINEVERSION_GET_P4BRANCH_OFFSET))();
		}

		static ::System::String* get_version()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_MIHOYO_ENGINEVERSION_GET_VERSION_OFFSET))();
		}
	};
}
