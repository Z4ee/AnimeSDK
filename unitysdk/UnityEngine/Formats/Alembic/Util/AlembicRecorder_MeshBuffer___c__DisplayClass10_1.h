#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Formats::Alembic::Util { class AlembicRecorder_MeshBuffer___c__DisplayClass10_0; }

#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHBUFFER___C__DISPLAYCLASS10_1__CAPTURE_B__5_OFFSET UNITYSDK_OFFSET(0x1B1A2F00)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHBUFFER___C__DISPLAYCLASS10_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1A2360)

namespace UnityEngine::Formats::Alembic::Util
{
	inline static constexpr unsigned int AlembicRecorder_MeshBuffer___c__DisplayClass10_1_TypeDefinitionIndex = 42444;

	class AlembicRecorder_MeshBuffer___c__DisplayClass10_1 : public ::System::Object
	{
	public:
		::UnityEngine::Formats::Alembic::Util::AlembicRecorder_MeshBuffer___c__DisplayClass10_0* CS___8__locals1; // 0x10
		::System::Int32 smi; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHBUFFER___C__DISPLAYCLASS10_1__CTOR_OFFSET))(this);
		}

		::System::Void _Capture_b__5(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHBUFFER___C__DISPLAYCLASS10_1__CAPTURE_B__5_OFFSET))(this, a1);
		}
	};
}
