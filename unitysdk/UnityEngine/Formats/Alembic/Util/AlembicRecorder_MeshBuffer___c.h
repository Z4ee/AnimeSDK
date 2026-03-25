#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Formats::Alembic::Sdk { template <typename T> class PinnedList_1; }

#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHBUFFER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x187AD110)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHBUFFER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x187AD150)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHBUFFER___C__DISPOSE_B__14_0_OFFSET UNITYSDK_OFFSET(0x187AD160)

namespace UnityEngine::Formats::Alembic::Util
{
	inline static constexpr unsigned int AlembicRecorder_MeshBuffer___c_TypeDefinitionIndex = 34928;

	class AlembicRecorder_MeshBuffer___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::System::Int32>*>** StaticGet___9__14_0()
		{
			return (::System::Action_1<::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(AlembicRecorder_MeshBuffer___c_TypeDefinitionIndex)->GetStaticField(0x358A0);
		}
		static ::UnityEngine::Formats::Alembic::Util::AlembicRecorder_MeshBuffer___c** StaticGet___9()
		{
			return (::UnityEngine::Formats::Alembic::Util::AlembicRecorder_MeshBuffer___c**)Il2CppClass::FromTypeDefinitionIndex(AlembicRecorder_MeshBuffer___c_TypeDefinitionIndex)->GetStaticField(0x358A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHBUFFER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHBUFFER___C__CTOR_OFFSET))(this);
		}

		::System::Void _Dispose_b__14_0(::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::System::Int32>* i)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHBUFFER___C__DISPOSE_B__14_0_OFFSET))(this, i);
		}
	};
}
