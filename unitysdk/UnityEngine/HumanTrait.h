#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_HUMANTRAIT_GETBONEINDEXFROMMONO_OFFSET UNITYSDK_OFFSET(0x1FC61DE0)
#define UNITYENGINE_HUMANTRAIT_GET_MUSCLECOUNT_OFFSET UNITYSDK_OFFSET(0x1FC61DD0)
#define UNITYENGINE_HUMANTRAIT_GET_MUSCLENAME_OFFSET UNITYSDK_OFFSET(0x1FC61DF0)
#define UNITYENGINE_HUMANTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC61E00)

namespace UnityEngine
{
	inline static constexpr unsigned int HumanTrait_TypeDefinitionIndex = 6650;

	class HumanTrait : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HUMANTRAIT__CTOR_OFFSET))(this);
		}

		static ::System::Int32 get_MuscleCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HUMANTRAIT_GET_MUSCLECOUNT_OFFSET))();
		}

		static ::System::Int32 GetBoneIndexFromMono(::System::Int32 humanId)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_HUMANTRAIT_GETBONEINDEXFROMMONO_OFFSET))(humanId);
		}

		static ::Il2CppArray<::System::String*>* get_MuscleName()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HUMANTRAIT_GET_MUSCLENAME_OFFSET))();
		}
	};
}
