#include <QtQml/qqmlprivate.h>
#include <QtCore/qdir.h>
#include <QtCore/qurl.h>

static const unsigned char qt_resource_tree[] = {
0,
0,0,0,0,2,0,0,0,33,0,0,0,1,0,0,1,
196,0,0,0,0,0,1,0,0,0,0,0,0,3,52,0,
0,0,0,0,1,0,0,0,0,0,0,0,186,0,0,0,
0,0,1,0,0,0,0,0,0,2,180,0,0,0,0,0,
1,0,0,0,0,0,0,1,162,0,0,0,0,0,1,0,
0,0,0,0,0,1,218,0,0,0,0,0,1,0,0,0,
0,0,0,1,44,0,0,0,0,0,1,0,0,0,0,0,
0,3,80,0,0,0,0,0,1,0,0,0,0,0,0,0,
220,0,0,0,0,0,1,0,0,0,0,0,0,3,244,0,
0,0,0,0,1,0,0,0,0,0,0,4,8,0,0,0,
0,0,1,0,0,0,0,0,0,0,120,0,0,0,0,0,
1,0,0,0,0,0,0,2,162,0,0,0,0,0,1,0,
0,0,0,0,0,2,74,0,0,0,0,0,1,0,0,0,
0,0,0,0,50,0,0,0,0,0,1,0,0,0,0,0,
0,3,208,0,0,0,0,0,1,0,0,0,0,0,0,3,
18,0,0,0,0,0,1,0,0,0,0,0,0,2,104,0,
0,0,0,0,1,0,0,0,0,0,0,3,126,0,0,0,
0,0,1,0,0,0,0,0,0,3,172,0,0,0,0,0,
1,0,0,0,0,0,0,0,162,0,0,0,0,0,1,0,
0,0,0,0,0,0,244,0,0,0,0,0,1,0,0,0,
0,0,0,1,14,0,0,0,0,0,1,0,0,0,0,0,
0,1,122,0,0,0,0,0,1,0,0,0,0,0,0,1,
246,0,0,0,0,0,1,0,0,0,0,0,0,2,240,0,
0,0,0,0,1,0,0,0,0,0,0,0,84,0,0,0,
0,0,1,0,0,0,0,0,0,2,26,0,0,0,0,0,
1,0,0,0,0,0,0,4,38,0,0,0,0,0,1,0,
0,0,0,0,0,2,210,0,0,0,0,0,1,0,0,0,
0,0,0,2,126,0,0,0,0,0,1,0,0,0,0,0,
0,0,8,0,0,0,0,0,1,0,0,0,0,0,0,1,
74,0,0,0,0,0,1,0,0,0,0};
static const unsigned char qt_resource_names[] = {
0,
1,0,0,0,47,0,47,0,18,15,182,157,92,0,65,0,
115,0,115,0,105,0,103,0,110,0,109,0,101,0,110,0,
116,0,80,0,97,0,103,0,101,0,46,0,113,0,109,0,
108,0,14,6,54,179,28,0,65,0,112,0,112,0,83,0,
105,0,100,0,101,0,66,0,97,0,114,0,46,0,113,0,
109,0,108,0,15,12,185,233,60,0,65,0,112,0,112,0,
83,0,121,0,110,0,99,0,80,0,97,0,103,0,101,0,
46,0,113,0,109,0,108,0,18,4,95,210,60,0,65,0,
112,0,112,0,65,0,115,0,115,0,105,0,103,0,110,0,
109,0,101,0,110,0,116,0,115,0,46,0,113,0,109,0,
108,0,9,9,107,248,188,0,73,0,110,0,98,0,111,0,
120,0,46,0,113,0,109,0,108,0,14,0,255,87,124,0,
67,0,97,0,110,0,118,0,97,0,115,0,83,0,121,0,
110,0,99,0,46,0,113,0,109,0,108,0,9,2,198,206,
60,0,70,0,105,0,108,0,101,0,115,0,46,0,113,0,
109,0,108,0,10,10,207,136,220,0,71,0,114,0,97,0,
100,0,101,0,115,0,46,0,113,0,109,0,108,0,12,11,
204,206,60,0,65,0,112,0,112,0,70,0,105,0,108,0,
101,0,115,0,46,0,113,0,109,0,108,0,12,2,166,52,
220,0,83,0,121,0,108,0,108,0,97,0,98,0,117,0,
115,0,46,0,113,0,109,0,108,0,21,15,184,219,220,0,
65,0,112,0,112,0,65,0,115,0,115,0,105,0,103,0,
110,0,109,0,101,0,110,0,116,0,80,0,97,0,103,0,
101,0,46,0,113,0,109,0,108,0,17,12,8,7,28,0,
65,0,110,0,110,0,111,0,117,0,110,0,99,0,101,0,
109,0,101,0,110,0,116,0,115,0,46,0,113,0,109,0,
108,0,14,2,48,123,252,0,84,0,101,0,115,0,116,0,
66,0,117,0,116,0,116,0,111,0,110,0,46,0,113,0,
109,0,108,0,8,0,70,91,92,0,115,0,121,0,110,0,
99,0,46,0,113,0,109,0,108,0,11,2,110,227,188,0,
77,0,111,0,100,0,117,0,108,0,101,0,115,0,46,0,
113,0,109,0,108,0,15,12,25,77,60,0,65,0,112,0,
112,0,87,0,105,0,107,0,105,0,80,0,97,0,103,0,
101,0,46,0,113,0,109,0,108,0,21,12,212,102,188,0,
65,0,112,0,112,0,67,0,111,0,117,0,114,0,115,0,
101,0,83,0,101,0,108,0,101,0,99,0,116,0,111,0,
114,0,46,0,113,0,109,0,108,0,12,4,204,252,220,0,
65,0,112,0,112,0,80,0,97,0,103,0,101,0,115,0,
46,0,113,0,109,0,108,0,8,8,1,90,92,0,109,0,
97,0,105,0,110,0,46,0,113,0,109,0,108,0,15,14,
61,5,60,0,65,0,112,0,112,0,72,0,111,0,109,0,
101,0,80,0,97,0,103,0,101,0,46,0,113,0,109,0,
108,0,6,4,135,53,19,0,65,0,112,0,112,0,46,0,
106,0,115,0,12,1,213,159,124,0,100,0,114,0,111,0,
112,0,84,0,101,0,115,0,116,0,46,0,113,0,109,0,
108,0,12,14,60,36,252,0,72,0,111,0,109,0,101,0,
80,0,97,0,103,0,101,0,46,0,113,0,109,0,108,0,
14,12,110,245,188,0,65,0,112,0,112,0,77,0,111,0,
100,0,117,0,108,0,101,0,115,0,46,0,113,0,109,0,
108,0,14,7,113,86,156,0,67,0,97,0,110,0,118,0,
97,0,115,0,80,0,97,0,103,0,101,0,46,0,113,0,
109,0,108,0,11,0,119,214,124,0,81,0,117,0,105,0,
122,0,122,0,101,0,115,0,46,0,113,0,109,0,108,0,
20,2,170,146,220,0,110,0,111,0,116,0,95,0,99,0,
114,0,101,0,100,0,101,0,110,0,116,0,105,0,97,0,
108,0,101,0,100,0,46,0,113,0,109,0,108,0,20,8,
8,35,60,0,65,0,112,0,112,0,65,0,110,0,110,0,
111,0,117,0,110,0,99,0,101,0,109,0,101,0,110,0,
116,0,115,0,46,0,113,0,109,0,108,0,15,9,14,216,
28,0,68,0,105,0,115,0,99,0,117,0,115,0,115,0,
105,0,111,0,110,0,115,0,46,0,113,0,109,0,108,0,
15,6,75,210,28,0,65,0,115,0,115,0,105,0,103,0,
110,0,109,0,101,0,110,0,116,0,115,0,46,0,113,0,
109,0,108,0,7,3,70,88,220,0,108,0,109,0,115,0,
46,0,113,0,109,0,108,0,12,3,181,16,188,0,67,0,
97,0,108,0,101,0,110,0,100,0,97,0,114,0,46,0,
113,0,109,0,108,0,9,13,198,252,220,0,80,0,97,0,
103,0,101,0,115,0,46,0,113,0,109,0,108};
static const unsigned char qt_resource_empty_payout[] = { 0, 0, 0, 0, 0 };
QT_BEGIN_NAMESPACE
extern Q_CORE_EXPORT bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);
QT_END_NAMESPACE
namespace QmlCacheGeneratedCode {
namespace _0x5f__Pages_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__Calendar_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__lms_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__Assignments_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__Discussions_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__AppAnnouncements_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__not_credentialed_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__Quizzes_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__CanvasPage_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__AppModules_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__HomePage_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__dropTest_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__App_js { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__AppHomePage_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__main_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__AppPages_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__AppCourseSelector_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__AppWikiPage_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__Modules_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__sync_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__TestButton_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__Announcements_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__AppAssignmentPage_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__Syllabus_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__AppFiles_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__Grades_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__Files_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__CanvasSync_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__Inbox_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__AppAssignments_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__AppSyncPage_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__AppSideBar_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__AssignmentPage_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}

}
namespace {
struct Registry {
    Registry();
    QHash<QString, const QQmlPrivate::CachedQmlUnit*> resourcePathToCachedUnit;
    static const QQmlPrivate::CachedQmlUnit *lookupCachedUnit(const QUrl &url);
};

Q_GLOBAL_STATIC(Registry, unitRegistry)


Registry::Registry() {
        resourcePathToCachedUnit.insert(QStringLiteral("/Pages.qml"), &QmlCacheGeneratedCode::_0x5f__Pages_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/Calendar.qml"), &QmlCacheGeneratedCode::_0x5f__Calendar_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/lms.qml"), &QmlCacheGeneratedCode::_0x5f__lms_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/Assignments.qml"), &QmlCacheGeneratedCode::_0x5f__Assignments_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/Discussions.qml"), &QmlCacheGeneratedCode::_0x5f__Discussions_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/AppAnnouncements.qml"), &QmlCacheGeneratedCode::_0x5f__AppAnnouncements_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/not_credentialed.qml"), &QmlCacheGeneratedCode::_0x5f__not_credentialed_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/Quizzes.qml"), &QmlCacheGeneratedCode::_0x5f__Quizzes_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/CanvasPage.qml"), &QmlCacheGeneratedCode::_0x5f__CanvasPage_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/AppModules.qml"), &QmlCacheGeneratedCode::_0x5f__AppModules_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/HomePage.qml"), &QmlCacheGeneratedCode::_0x5f__HomePage_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/dropTest.qml"), &QmlCacheGeneratedCode::_0x5f__dropTest_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/App.js"), &QmlCacheGeneratedCode::_0x5f__App_js::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/AppHomePage.qml"), &QmlCacheGeneratedCode::_0x5f__AppHomePage_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/main.qml"), &QmlCacheGeneratedCode::_0x5f__main_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/AppPages.qml"), &QmlCacheGeneratedCode::_0x5f__AppPages_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/AppCourseSelector.qml"), &QmlCacheGeneratedCode::_0x5f__AppCourseSelector_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/AppWikiPage.qml"), &QmlCacheGeneratedCode::_0x5f__AppWikiPage_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/Modules.qml"), &QmlCacheGeneratedCode::_0x5f__Modules_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/sync.qml"), &QmlCacheGeneratedCode::_0x5f__sync_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/TestButton.qml"), &QmlCacheGeneratedCode::_0x5f__TestButton_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/Announcements.qml"), &QmlCacheGeneratedCode::_0x5f__Announcements_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/AppAssignmentPage.qml"), &QmlCacheGeneratedCode::_0x5f__AppAssignmentPage_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/Syllabus.qml"), &QmlCacheGeneratedCode::_0x5f__Syllabus_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/AppFiles.qml"), &QmlCacheGeneratedCode::_0x5f__AppFiles_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/Grades.qml"), &QmlCacheGeneratedCode::_0x5f__Grades_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/Files.qml"), &QmlCacheGeneratedCode::_0x5f__Files_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/CanvasSync.qml"), &QmlCacheGeneratedCode::_0x5f__CanvasSync_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/Inbox.qml"), &QmlCacheGeneratedCode::_0x5f__Inbox_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/AppAssignments.qml"), &QmlCacheGeneratedCode::_0x5f__AppAssignments_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/AppSyncPage.qml"), &QmlCacheGeneratedCode::_0x5f__AppSyncPage_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/AppSideBar.qml"), &QmlCacheGeneratedCode::_0x5f__AppSideBar_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/AssignmentPage.qml"), &QmlCacheGeneratedCode::_0x5f__AssignmentPage_qml::unit);
    QQmlPrivate::RegisterQmlUnitCacheHook registration;
    registration.version = 0;
    registration.lookupCachedQmlUnit = &lookupCachedUnit;
    QQmlPrivate::qmlregister(QQmlPrivate::QmlUnitCacheHookRegistration, &registration);
QT_PREPEND_NAMESPACE(qRegisterResourceData)(/*version*/0x01, qt_resource_tree, qt_resource_names, qt_resource_empty_payout);
}
const QQmlPrivate::CachedQmlUnit *Registry::lookupCachedUnit(const QUrl &url) {
    if (url.scheme() != QLatin1String("qrc"))
        return nullptr;
    QString resourcePath = QDir::cleanPath(url.path());
    if (resourcePath.isEmpty())
        return nullptr;
    if (!resourcePath.startsWith(QLatin1Char('/')))
        resourcePath.prepend(QLatin1Char('/'));
    return unitRegistry()->resourcePathToCachedUnit.value(resourcePath, nullptr);
}
}
int QT_MANGLE_NAMESPACE(qInitResources_qml)() {
    ::unitRegistry();
    Q_INIT_RESOURCE(qml_qmlcache);
    return 1;
}
Q_CONSTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qInitResources_qml))
int QT_MANGLE_NAMESPACE(qCleanupResources_qml)() {
    Q_CLEANUP_RESOURCE(qml_qmlcache);
    return 1;
}
