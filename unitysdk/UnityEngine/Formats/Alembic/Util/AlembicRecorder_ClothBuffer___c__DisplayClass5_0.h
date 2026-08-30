#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/BoneWeight.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }

#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CLOTHBUFFER___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB9F60)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CLOTHBUFFER___C__DISPLAYCLASS5_0__GENERATEREMAPINDICES_B__0_OFFSET UNITYSDK_OFFSET(0x1EABBBD0)

namespace UnityEngine::Formats::Alembic::Util
{
	inline static constexpr unsigned int AlembicRecorder_ClothBuffer___c__DisplayClass5_0_TypeDefinitionIndex = 44628;

	class AlembicRecorder_ClothBuffer___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::UnityEngine::Mesh* mesh; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CLOTHBUFFER___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _GenerateRemapIndices_b__0(::System::Collections::Generic::List_1<::UnityEngine::BoneWeight>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::BoneWeight>*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CLOTHBUFFER___C__DISPLAYCLASS5_0__GENERATEREMAPINDICES_B__0_OFFSET))(this, a1);
		}
	};
}
