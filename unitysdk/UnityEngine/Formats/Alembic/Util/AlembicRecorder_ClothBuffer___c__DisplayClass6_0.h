#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }

#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CLOTHBUFFER___C__DISPLAYCLASS6_0__CAPTURE_B__0_OFFSET UNITYSDK_OFFSET(0x1B1A2010)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CLOTHBUFFER___C__DISPLAYCLASS6_0__CAPTURE_B__1_OFFSET UNITYSDK_OFFSET(0x1B1A2050)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CLOTHBUFFER___C__DISPLAYCLASS6_0__CAPTURE_B__2_OFFSET UNITYSDK_OFFSET(0x1B1A2090)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CLOTHBUFFER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1A1D20)

namespace UnityEngine::Formats::Alembic::Util
{
	inline static constexpr unsigned int AlembicRecorder_ClothBuffer___c__DisplayClass6_0_TypeDefinitionIndex = 42447;

	class AlembicRecorder_ClothBuffer___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::UnityEngine::Mesh* mesh; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CLOTHBUFFER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _Capture_b__0(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CLOTHBUFFER___C__DISPLAYCLASS6_0__CAPTURE_B__0_OFFSET))(this, a1);
		}

		::System::Void _Capture_b__1(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CLOTHBUFFER___C__DISPLAYCLASS6_0__CAPTURE_B__1_OFFSET))(this, a1);
		}

		::System::Void _Capture_b__2(::System::Collections::Generic::List_1<::UnityEngine::Color>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CLOTHBUFFER___C__DISPLAYCLASS6_0__CAPTURE_B__2_OFFSET))(this, a1);
		}
	};
}
